#include "ArduinoGraphics.h"

ArduinoGraphics::ArduinoGraphics(int width, int height) :
  _width(width),
  _height(height),
  _font(NULL)
{
}

ArduinoGraphics::~ArduinoGraphics()
{
}

int ArduinoGraphics::begin()
{
  background(0, 0, 0);
  noFill();
  noStroke();

  return 1;
}

void ArduinoGraphics::end()
{
}

int ArduinoGraphics::width()
{
  return _width;
}

int ArduinoGraphics::height()
{
  return _height;
}

void ArduinoGraphics::beginDraw()
{
}

void ArduinoGraphics::endDraw()
{
}

void ArduinoGraphics::background(uint8_t r, uint8_t g, uint8_t b)
{
  _backgroundR = r;
  _backgroundG = g;
  _backgroundB = b;
}

void ArduinoGraphics::clear()
{
  for (int x = 0; x < _width; x++) {
    for (int y = 0; y < _height; y++) {
      set(x, y, _backgroundR, _backgroundB, _backgroundG);
    }
  }
}

void ArduinoGraphics::fill(uint8_t r, uint8_t g, uint8_t b)
{
  _fill = true;
  _fillR = r;
  _fillG = g;
  _fillB = b;
}

void ArduinoGraphics::noFill()
{
  _fill = false;
}

void ArduinoGraphics::stroke(uint8_t r, uint8_t g, uint8_t b)
{
  _stroke = true;
  _strokeR = r;
  _strokeG = g;
  _strokeB = b;
}

void ArduinoGraphics::noStroke()
{
  _stroke = false;
}

void ArduinoGraphics::line(int x1, int y1, int x2, int y2)
{
  if (!_stroke) {
    return;
  }

  if (x1 == x2) {
    for (int y = y1; y <= y2; y++) {
      set(x1, y, _strokeR, _strokeG, _strokeB);
    }
  } else if (y1 == y2) {
    for (int x = x1; x <= x2; x++) {
      set(x, y1, _strokeR, _strokeG, _strokeB);
    }
  } else if (abs(y2 - y1) < abs(x2 - x1)) {
    if (x1 > x2) {
      lineLow(x2, y2, x1, y1);
    } else {
      lineLow(x1, y1, x2, y2);
    }
  } else {
    if (y1 > y2) {
      lineHigh(x2, y2, x1, y1);
    } else {
      lineHigh(x1, y1, x2, y2);
    }
  }
}

void ArduinoGraphics::point(int x, int y)
{
  if (_stroke) {
    set(x, y, _strokeR, _strokeG, _strokeB);
  }
}

void ArduinoGraphics::rect(int x, int y, int width, int height)
{
  if (!_stroke && !_fill) {
    return;
  }

  int x1 = x;
  int y1 = y;
  int x2 = x1 + width - 1;
  int y2 = y1 + height - 1;

  for (x = x1; x <= x2; x++) {
    for (y = y1; y <= y2; y++) {
      if ((x == x1 || x == x2 || y == y1 || y == y2) && _stroke) {
        // stroke
        set(x, y, _strokeR, _strokeG, _strokeB);
      } else if (_fill) {
        // fill
        set(x, y, _fillR, _fillG, _fillB);
      }
    }
  }
}

void ArduinoGraphics::text(const char* str, int x, int y)
{
  if (!_font || !_stroke) {
    return;
  }

  while (*str) {
    int c = *str;

    if (c == '\n') {
      y += _font->height;
      continue;
    }

    if (c == '\r') {
      x = 0;
      continue;
    }

    const uint8_t* b = _font->data[c];

    if (b == NULL) {
      b =  _font->data[0x20];
    }

    if (b) {
      bitmap(b, x, y, _font->width, _font->height);
    }

    x += _font->width;
    str++;
  }
}

void ArduinoGraphics::textFont(const Font& which)
{
  _font = &which;
}

int ArduinoGraphics::textFontWidth() const
{
  return (_font ? _font->width : 0);
}

int ArduinoGraphics::textFontHeight() const
{
  return (_font ? _font->height : 0);
}

void ArduinoGraphics::bitmap(const uint8_t* data, int x, int y, int width, int height)
{
  if (!_stroke) {
    return;
  }

  if (((x + width) < 0) || ((y + height) < 0) || (x > _width) || (y > height)) {
    // offscreen
    return;
  }

  for (int j = 0; j < height; j++) {
    uint8_t b = data[j];

    for (int i = 0; i < width; i++) {
      if (b & (1 << (7 - i))) {
        set(x + i, y + j, _strokeR, _strokeG, _strokeB);
      } else {
        set(x + i, y + j, _backgroundR, _backgroundG, _backgroundB);
      }
    }
  }
}

size_t ArduinoGraphics::write(uint8_t b)
{
  if (b == '\n') {
    flush();
  } else if (b == '\r') {
    // do nothing
  } else {
    // buffer
    _printBuffer += (char)b;
  }

  return 1;
}

void ArduinoGraphics::flush()
{
  // backup the stroke color and set the color to the text color
  bool strokeOn = _stroke;
  uint8_t strokeR = _strokeR;
  uint8_t strokeG = _strokeG;
  uint8_t strokeB = _strokeB;

  stroke(_textR, _textG, _textB);

  if (_textScrollSpeed) {
    int scrollLength = _printBuffer.length() * textFontWidth();

    for (int i = 0; i < scrollLength; i++) {
      beginDraw();
      text(_printBuffer, _textX - i, _textY);
      endDraw();

      delay(_textScrollSpeed);
    }
  } else {
    beginDraw();
    text(_printBuffer, _textX, _textY);
    endDraw();
  }

  // restore the stroke color
  if (strokeOn) {
    stroke(strokeR, strokeG, strokeB);
  } else {
    noStroke();
  }

  // clear the buffer
  _printBuffer = "";
}

void ArduinoGraphics::textColor(int r, int g, int b)
{
  _textR = r;
  _textG = g;
  _textB = b;
}

void ArduinoGraphics::textPosition(int x, int y)
{
  _textX = x;
  _textY = y;
}

void ArduinoGraphics::textScroll(long speed)
{
  _textScrollSpeed = speed;
}

void ArduinoGraphics::noTextScroll()
{
  _textScrollSpeed = 0;
}

void ArduinoGraphics::lineLow(int x1, int y1, int x2, int y2)
{
  int dx = x2 - x1;
  int dy = y2 - y1;
  int yi = 1;

  if (dy < 0) {
    yi = -1;
    dy = -dy;
  }

  int D = 2 * dy - dx;
  int y = y1;

  for (int x = x1; x <= x2; x++) {
    set(x, y, _strokeR, _strokeG, _strokeB);

    if (D > 0) {
      y += yi;
      D -= (2 * dx);
    }

    D += (2 * dy);
  }
}

void ArduinoGraphics::lineHigh(int x1, int y1, int x2, int y2)
{
  int dx = x2 - x1;
  int dy = y2 - y1;
  int xi = 1;

  if (dx < 0) {
    xi = -1;
    dx = -dx;
  }
  
  int D = 2 * dx - dy;
  int x = x1;

  for (int y = y1; y <= y2; y++) {
    set(x, y, _strokeR, _strokeG, _strokeB);

    if (D > 0) {
       x += xi;
       D -= 2 * dy;
    }

    D += 2 * dx;
  }
}
