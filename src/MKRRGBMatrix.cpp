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

  _buffer[5 + n * 4] = b;
  _buffer[6 + n * 4] = g;
  _buffer[7 + n * 4] = r;
}

RGBMatrixClass MATRIX;
