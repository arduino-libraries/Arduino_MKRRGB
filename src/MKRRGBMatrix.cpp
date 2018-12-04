/*
  This file is part of the MKRRGBMatrix library.
  Copyright (c) 2018 Arduino SA. All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include <SPI.h>
#include <wiring_private.h>

#include "MKRRGBMatrix.h"

static SPIClass SPI_MATRIX(&sercom0, A3, A4, A3, SPI_PAD_0_SCK_1, SERCOM_RX_PAD_0);

// This table is based on the formula: gamma = (int)(pow(i / 255.0, gamma) * 255 + offset)
// where gamma = 2.5 and offset is 0.5
// based on: 
//           https://github.com/ManiacalLabs/BiblioPixel/blob/master/bibliopixel/colors/gamma.py
static const uint8_t GAMMA_TABLE[] = {
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
    1,   2,   2,   2,   2,   2,   2,   2,   2,   3,   3,   3,   3,   3,   4,   4,
    4,   4,   4,   5,   5,   5,   5,   6,   6,   6,   6,   7,   7,   7,   7,   8,
    8,   8,   9,   9,   9,  10,  10,  10,  11,  11,  12,  12,  12,  13,  13,  14,
   14,  15,  15,  15,  16,  16,  17,  17,  18,  18,  19,  19,  20,  20,  21,  22,
   22,  23,  23,  24,  25,  25,  26,  26,  27,  28,  28,  29,  30,  30,  31,  32,
   33,  33,  34,  35,  36,  36,  37,  38,  39,  40,  40,  41,  42,  43,  44,  45,
   46,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,  60,
   61,  62,  63,  64,  65,  67,  68,  69,  70,  71,  72,  73,  75,  76,  77,  78,
   80,  81,  82,  83,  85,  86,  87,  89,  90,  91,  93,  94,  95,  97,  98,  99,
  101, 102, 104, 105, 107, 108, 110, 111, 113, 114, 116, 117, 119, 121, 122, 124,
  125, 127, 129, 130, 132, 134, 135, 137, 139, 141, 142, 144, 146, 148, 150, 151,
  153, 155, 157, 159, 161, 163, 165, 166, 168, 170, 172, 174, 176, 178, 180, 182,
  184, 186, 189, 191, 193, 195, 197, 199, 201, 204, 206, 208, 210, 212, 215, 217,
  219, 221, 224, 226, 228, 231, 233, 235, 238, 240, 243, 245, 248, 250, 253, 255
};

RGBMatrixClass::RGBMatrixClass() :
  ArduinoGraphics(RGB_MATRIX_WIDTH, RGB_MATRIX_HEIGHT)
{
}

RGBMatrixClass::~RGBMatrixClass()
{
}

int RGBMatrixClass::begin()
{
  if (!ArduinoGraphics::begin()) {
    return 0;
  }

  textFont(Font_5x7);

  // zero the matrix up to the end frame, and fill the end frame
  memset(_buffer, 0x00, 4 + 4 * RGB_MATRIX_WIDTH * RGB_MATRIX_HEIGHT);
  memset(_buffer + 4 + 4 * RGB_MATRIX_WIDTH * RGB_MATRIX_HEIGHT, 0xff, sizeof(_buffer) - (4 + 4 * RGB_MATRIX_WIDTH * RGB_MATRIX_HEIGHT));

  SPI_MATRIX.begin();
  SPI_MATRIX.beginTransaction(SPISettings(12e6, MSBFIRST, SPI_MODE0));

  pinPeripheral(A3, PIO_SERCOM_ALT);
  pinPeripheral(A4, PIO_SERCOM_ALT);

  brightness(127);

  return 1;
}

void RGBMatrixClass::end()
{
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);

  SPI_MATRIX.end();

  ArduinoGraphics::end();
}

void RGBMatrixClass::brightness(uint8_t brightness)
{
  if (brightness != 0 && brightness < 8) {
    brightness = 8;
  }

  // scale the brightness from: 0 - 255 to 0 - 31
  brightness = 0xe0 | (brightness >> 3);

  for (int i = 0; i < (RGB_MATRIX_WIDTH * RGB_MATRIX_HEIGHT); i++) {
    _buffer[4 + i * 4] = brightness;
  }

  SPI_MATRIX.transfer(_buffer, sizeof(_buffer));
}

void RGBMatrixClass::beginDraw()
{
  ArduinoGraphics::beginDraw();
}

void RGBMatrixClass::endDraw()
{
  ArduinoGraphics::endDraw();

  SPI_MATRIX.transfer(_buffer, sizeof(_buffer));
}

void RGBMatrixClass::set(int x, int y, uint8_t r, uint8_t g, uint8_t b)
{
  if (x < 0 || x >= RGB_MATRIX_WIDTH || y < 0 || y >= RGB_MATRIX_HEIGHT) {
    return;
  }

  int n = y * RGB_MATRIX_WIDTH + x;

  _buffer[5 + n * 4] = GAMMA_TABLE[b];
  _buffer[6 + n * 4] = GAMMA_TABLE[g];
  _buffer[7 + n * 4] = GAMMA_TABLE[r];
}

RGBMatrixClass MATRIX;
