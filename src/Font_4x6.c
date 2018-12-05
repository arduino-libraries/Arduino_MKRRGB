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

#include "Font.h"

const struct Font Font_4x6 = {
  4,
  6,
  (const uint8_t*[]){
    // char0
    (const uint8_t[]){
      0b10100000,
      0b00000000,
      0b10100000,
      0b00000000,
      0b10100000,
      0b00000000,
    },
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    // space
    (const uint8_t[]){
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
    },
    // exclam
    (const uint8_t[]){
      0b01000000,
      0b01000000,
      0b01000000,
      0b00000000,
      0b01000000,
      0b00000000,
    },
    // quotedbl
    (const uint8_t[]){
      0b10100000,
      0b10100000,
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
    },
    // numbersign
    (const uint8_t[]){
      0b10100000,
      0b11110000,
      0b10100000,
      0b11110000,
      0b10100000,
      0b00000000,
    },
    // dollar
    (const uint8_t[]){
      0b01000000,
      0b11100000,
      0b11000000,
      0b00100000,
      0b11100000,
      0b01000000,
    },
    // percent
    (const uint8_t[]){
      0b10000000,
      0b00100000,
      0b01000000,
      0b10000000,
      0b00100000,
      0b00000000,
    },
    // ampersand
    (const uint8_t[]){
      0b01000000,
      0b10100000,
      0b01000000,
      0b10100000,
      0b01010000,
      0b00000000,
    },
    // quotesingle
    (const uint8_t[]){
      0b01000000,
      0b01000000,
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
    },
    // parenleft
    (const uint8_t[]){
      0b00100000,
      0b01000000,
      0b01000000,
      0b01000000,
      0b01000000,
      0b00100000,
    },
    // parenright
    (const uint8_t[]){
      0b10000000,
      0b01000000,
      0b01000000,
      0b01000000,
      0b01000000,
      0b10000000,
    },
    // asterisk
    (const uint8_t[]){
      0b10100000,
      0b01000000,
      0b11100000,
      0b01000000,
      0b10100000,
      0b00000000,
    },
    // plus
    (const uint8_t[]){
      0b01000000,
      0b01000000,
      0b11100000,
      0b01000000,
      0b01000000,
      0b00000000,
    },
    // comma
    (const uint8_t[]){
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
      0b01000000,
      0b10000000,
    },
    // hyphen
    (const uint8_t[]){
      0b00000000,
      0b00000000,
      0b11100000,
      0b00000000,
      0b00000000,
      0b00000000,
    },
    // period
    (const uint8_t[]){
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
      0b01000000,
      0b00000000,
    },
    // slash
    (const uint8_t[]){
      0b00100000,
      0b00100000,
      0b01000000,
      0b10000000,
      0b10000000,
      0b00000000,
    },
    // zero
    (const uint8_t[]){
      0b01000000,
      0b10100000,
      0b11100000,
      0b10100000,
      0b01000000,
      0b00000000,
    },
    // one
    (const uint8_t[]){
      0b01000000,
      0b11000000,
      0b01000000,
      0b01000000,
      0b11100000,
      0b00000000,
    },
    // two
    (const uint8_t[]){
      0b01000000,
      0b10100000,
      0b00100000,
      0b01000000,
      0b11100000,
      0b00000000,
    },
    // three
    (const uint8_t[]){
      0b11100000,
      0b00100000,
      0b01000000,
      0b00100000,
      0b11000000,
      0b00000000,
    },
    // four
    (const uint8_t[]){
      0b10100000,
      0b10100000,
      0b11100000,
      0b00100000,
      0b00100000,
      0b00000000,
    },
    // five
    (const uint8_t[]){
      0b11100000,
      0b10000000,
      0b11000000,
      0b00100000,
      0b11000000,
      0b00000000,
    },
    // six
    (const uint8_t[]){
      0b01100000,
      0b10000000,
      0b11000000,
      0b10100000,
      0b01000000,
      0b00000000,
    },
    // seven
    (const uint8_t[]){
      0b11100000,
      0b00100000,
      0b01000000,
      0b10000000,
      0b10000000,
      0b00000000,
    },
    // eight
    (const uint8_t[]){
      0b01100000,
      0b10100000,
      0b01000000,
      0b10100000,
      0b11000000,
      0b00000000,
    },
    // nine
    (const uint8_t[]){
      0b01000000,
      0b10100000,
      0b01100000,
      0b00100000,
      0b11000000,
      0b00000000,
    },
    // colon
    (const uint8_t[]){
      0b00000000,
      0b01000000,
      0b00000000,
      0b00000000,
      0b01000000,
      0b00000000,
    },
    // semicolon
    (const uint8_t[]){
      0b00000000,
      0b01000000,
      0b00000000,
      0b00000000,
      0b01000000,
      0b10000000,
    },
    // less
    (const uint8_t[]){
      0b00100000,
      0b01000000,
      0b10000000,
      0b01000000,
      0b00100000,
      0b00000000,
    },
    // equal
    (const uint8_t[]){
      0b00000000,
      0b11100000,
      0b00000000,
      0b11100000,
      0b00000000,
      0b00000000,
    },
    // greater
    (const uint8_t[]){
      0b10000000,
      0b01000000,
      0b00100000,
      0b01000000,
      0b10000000,
      0b00000000,
    },
    // question
    (const uint8_t[]){
      0b11000000,
      0b00100000,
      0b01000000,
      0b00000000,
      0b01000000,
      0b00000000,
    },
    // at
    (const uint8_t[]){
      0b01100000,
      0b10100000,
      0b10100000,
      0b10000000,
      0b01100000,
      0b00000000,
    },
    // A
    (const uint8_t[]){
      0b01000000,
      0b10100000,
      0b11100000,
      0b10100000,
      0b10100000,
      0b00000000,
    },
    // B
    (const uint8_t[]){
      0b11000000,
      0b10100000,
      0b11000000,
      0b10100000,
      0b11000000,
      0b00000000,
    },
    // C
    (const uint8_t[]){
      0b01000000,
      0b10100000,
      0b10000000,
      0b10100000,
      0b01000000,
      0b00000000,
    },
    // D
    (const uint8_t[]){
      0b11000000,
      0b10100000,
      0b10100000,
      0b10100000,
      0b11000000,
      0b00000000,
    },
    // E
    (const uint8_t[]){
      0b11100000,
      0b10000000,
      0b11000000,
      0b10000000,
      0b11100000,
      0b00000000,
    },
    // F
    (const uint8_t[]){
      0b11100000,
      0b10000000,
      0b11000000,
      0b10000000,
      0b10000000,
      0b00000000,
    },
    // G
    (const uint8_t[]){
      0b01100000,
      0b10000000,
      0b10100000,
      0b10100000,
      0b01100000,
      0b00000000,
    },
    // H
    (const uint8_t[]){
      0b10100000,
      0b10100000,
      0b11100000,
      0b10100000,
      0b10100000,
      0b00000000,
    },
    // I
    (const uint8_t[]){
      0b11100000,
      0b01000000,
      0b01000000,
      0b01000000,
      0b11100000,
      0b00000000,
    },
    // J
    (const uint8_t[]){
      0b00100000,
      0b00100000,
      0b00100000,
      0b10100000,
      0b01000000,
      0b00000000,
    },
    // K
    (const uint8_t[]){
      0b10100000,
      0b10100000,
      0b11000000,
      0b10100000,
      0b10100000,
      0b00000000,
    },
    // L
    (const uint8_t[]){
      0b10000000,
      0b10000000,
      0b10000000,
      0b10000000,
      0b11100000,
      0b00000000,
    },
    // M
    (const uint8_t[]){
      0b10100000,
      0b11100000,
      0b11100000,
      0b10100000,
      0b10100000,
      0b00000000,
    },
    // N
    (const uint8_t[]){
      0b00100000,
      0b10100000,
      0b11100000,
      0b10100000,
      0b10000000,
      0b00000000,
    },
    // O
    (const uint8_t[]){
      0b01000000,
      0b10100000,
      0b10100000,
      0b10100000,
      0b01000000,
      0b00000000,
    },
    // P
    (const uint8_t[]){
      0b11000000,
      0b10100000,
      0b11000000,
      0b10000000,
      0b10000000,
      0b00000000,
    },
    // Q
    (const uint8_t[]){
      0b01000000,
      0b10100000,
      0b10100000,
      0b10100000,
      0b01000000,
      0b00100000,
    },
    // R
    (const uint8_t[]){
      0b11000000,
      0b10100000,
      0b11000000,
      0b10100000,
      0b10100000,
      0b00000000,
    },
    // S
    (const uint8_t[]){
      0b01100000,
      0b10000000,
      0b01000000,
      0b00100000,
      0b11000000,
      0b00000000,
    },
    // T
    (const uint8_t[]){
      0b11100000,
      0b01000000,
      0b01000000,
      0b01000000,
      0b01000000,
      0b00000000,
    },
    // U
    (const uint8_t[]){
      0b10100000,
      0b10100000,
      0b10100000,
      0b10100000,
      0b11100000,
      0b00000000,
    },
    // V
    (const uint8_t[]){
      0b10100000,
      0b10100000,
      0b10100000,
      0b11100000,
      0b01000000,
      0b00000000,
    },
    // W
    (const uint8_t[]){
      0b10100000,
      0b10100000,
      0b11100000,
      0b11100000,
      0b10100000,
      0b00000000,
    },
    // X
    (const uint8_t[]){
      0b10100000,
      0b10100000,
      0b01000000,
      0b10100000,
      0b10100000,
      0b00000000,
    },
    // Y
    (const uint8_t[]){
      0b10100000,
      0b10100000,
      0b01000000,
      0b01000000,
      0b01000000,
      0b00000000,
    },
    // Z
    (const uint8_t[]){
      0b11100000,
      0b00100000,
      0b01000000,
      0b10000000,
      0b11100000,
      0b00000000,
    },
    // bracketleft
    (const uint8_t[]){
      0b01100000,
      0b01000000,
      0b01000000,
      0b01000000,
      0b01100000,
      0b00000000,
    },
    // backslash
    (const uint8_t[]){
      0b10000000,
      0b10000000,
      0b01000000,
      0b00100000,
      0b00100000,
      0b00000000,
    },
    // bracketright
    (const uint8_t[]){
      0b11000000,
      0b01000000,
      0b01000000,
      0b01000000,
      0b11000000,
      0b00000000,
    },
    // asciicircum
    (const uint8_t[]){
      0b01000000,
      0b10100000,
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
    },
    // underscore
    (const uint8_t[]){
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
      0b11100000,
    },
    // grave
    (const uint8_t[]){
      0b01000000,
      0b00100000,
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
    },
    // a
    (const uint8_t[]){
      0b00000000,
      0b01100000,
      0b10100000,
      0b10100000,
      0b01100000,
      0b00000000,
    },
    // b
    (const uint8_t[]){
      0b10000000,
      0b11000000,
      0b10100000,
      0b10100000,
      0b11000000,
      0b00000000,
    },
    // c
    (const uint8_t[]){
      0b00000000,
      0b01100000,
      0b10000000,
      0b10000000,
      0b01100000,
      0b00000000,
    },
    // d
    (const uint8_t[]){
      0b00100000,
      0b01100000,
      0b10100000,
      0b10100000,
      0b01100000,
      0b00000000,
    },
    // e
    (const uint8_t[]){
      0b00000000,
      0b01000000,
      0b10100000,
      0b11000000,
      0b01100000,
      0b00000000,
    },
    // f
    (const uint8_t[]){
      0b00100000,
      0b01000000,
      0b11100000,
      0b01000000,
      0b01000000,
      0b00000000,
    },
    // g
    (const uint8_t[]){
      0b00000000,
      0b01100000,
      0b10100000,
      0b01100000,
      0b00100000,
      0b11000000,
    },
    // h
    (const uint8_t[]){
      0b10000000,
      0b11000000,
      0b10100000,
      0b10100000,
      0b10100000,
      0b00000000,
    },
    // i
    (const uint8_t[]){
      0b01000000,
      0b00000000,
      0b11000000,
      0b01000000,
      0b11100000,
      0b00000000,
    },
    // j
    (const uint8_t[]){
      0b00100000,
      0b00000000,
      0b00100000,
      0b00100000,
      0b00100000,
      0b11000000,
    },
    // k
    (const uint8_t[]){
      0b10000000,
      0b10100000,
      0b11000000,
      0b10100000,
      0b10100000,
      0b00000000,
    },
    // l
    (const uint8_t[]){
      0b11000000,
      0b01000000,
      0b01000000,
      0b01000000,
      0b11100000,
      0b00000000,
    },
    // m
    (const uint8_t[]){
      0b00000000,
      0b10100000,
      0b11100000,
      0b10100000,
      0b10100000,
      0b00000000,
    },
    // n
    (const uint8_t[]){
      0b00000000,
      0b11000000,
      0b10100000,
      0b10100000,
      0b10100000,
      0b00000000,
    },
    // o
    (const uint8_t[]){
      0b00000000,
      0b01000000,
      0b10100000,
      0b10100000,
      0b01000000,
      0b00000000,
    },
    // p
    (const uint8_t[]){
      0b00000000,
      0b11000000,
      0b10100000,
      0b11000000,
      0b10000000,
      0b10000000,
    },
    // q
    (const uint8_t[]){
      0b00000000,
      0b01100000,
      0b10100000,
      0b10100000,
      0b01100000,
      0b00100000,
    },
    // r
    (const uint8_t[]){
      0b00000000,
      0b10100000,
      0b11000000,
      0b10000000,
      0b10000000,
      0b00000000,
    },
    // s
    (const uint8_t[]){
      0b00000000,
      0b01100000,
      0b11000000,
      0b00100000,
      0b11000000,
      0b00000000,
    },
    // t
    (const uint8_t[]){
      0b01000000,
      0b11100000,
      0b01000000,
      0b01000000,
      0b00100000,
      0b00000000,
    },
    // u
    (const uint8_t[]){
      0b00000000,
      0b10100000,
      0b10100000,
      0b10100000,
      0b01100000,
      0b00000000,
    },
    // v
    (const uint8_t[]){
      0b00000000,
      0b10100000,
      0b10100000,
      0b10100000,
      0b01000000,
      0b00000000,
    },
    // w
    (const uint8_t[]){
      0b00000000,
      0b10100000,
      0b10100000,
      0b11100000,
      0b10100000,
      0b00000000,
    },
    // x
    (const uint8_t[]){
      0b00000000,
      0b10100000,
      0b01000000,
      0b01000000,
      0b10100000,
      0b00000000,
    },
    // y
    (const uint8_t[]){
      0b00000000,
      0b10100000,
      0b10100000,
      0b01100000,
      0b00100000,
      0b11000000,
    },
    // z
    (const uint8_t[]){
      0b00000000,
      0b11100000,
      0b00100000,
      0b01000000,
      0b11100000,
      0b00000000,
    },
    // braceleft
    (const uint8_t[]){
      0b00100000,
      0b01000000,
      0b11000000,
      0b01000000,
      0b01000000,
      0b00100000,
    },
    // bar
    (const uint8_t[]){
      0b01000000,
      0b01000000,
      0b01000000,
      0b01000000,
      0b01000000,
      0b00000000,
    },
    // braceright
    (const uint8_t[]){
      0b10000000,
      0b01000000,
      0b01100000,
      0b01000000,
      0b01000000,
      0b10000000,
    },
    // asciitilde
    (const uint8_t[]){
      0b01010000,
      0b10100000,
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
    },
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    // space
    (const uint8_t[]){
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
    },
    // exclamdown
    (const uint8_t[]){
      0b01000000,
      0b00000000,
      0b01000000,
      0b01000000,
      0b01000000,
      0b00000000,
    },
    // cent
    (const uint8_t[]){
      0b01000000,
      0b11100000,
      0b10000000,
      0b11100000,
      0b01000000,
      0b00000000,
    },
    // sterling
    (const uint8_t[]){
      0b00100000,
      0b01000000,
      0b01100000,
      0b01000000,
      0b10100000,
      0b00000000,
    },
    // currency
    (const uint8_t[]){
      0b00000000,
      0b10010000,
      0b01100000,
      0b01100000,
      0b10010000,
      0b00000000,
    },
    // yen
    (const uint8_t[]){
      0b10100000,
      0b01000000,
      0b11100000,
      0b01000000,
      0b01000000,
      0b00000000,
    },
    // brokenbar
    (const uint8_t[]){
      0b01000000,
      0b01000000,
      0b00000000,
      0b01000000,
      0b01000000,
      0b00000000,
    },
    // section
    (const uint8_t[]){
      0b01100000,
      0b11000000,
      0b10100000,
      0b01100000,
      0b00100000,
      0b11000000,
    },
    // dieresis
    (const uint8_t[]){
      0b10100000,
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
    },
    // copyright
    (const uint8_t[]){
      0b01100000,
      0b10010000,
      0b11010000,
      0b11010000,
      0b10010000,
      0b01100000,
    },
    // ordfeminine
    (const uint8_t[]){
      0b01100000,
      0b10100000,
      0b01100000,
      0b00000000,
      0b11100000,
      0b00000000,
    },
    // guillemotleft
    (const uint8_t[]){
      0b00000000,
      0b01010000,
      0b10100000,
      0b01010000,
      0b00000000,
      0b00000000,
    },
    // logicalnot
    (const uint8_t[]){
      0b00000000,
      0b00000000,
      0b11100000,
      0b00100000,
      0b00000000,
      0b00000000,
    },
    // hyphen
    (const uint8_t[]){
      0b00000000,
      0b00000000,
      0b11100000,
      0b00000000,
      0b00000000,
      0b00000000,
    },
    // registered
    (const uint8_t[]){
      0b01100000,
      0b11110000,
      0b11010000,
      0b01100000,
      0b00000000,
      0b00000000,
    },
    // macron
    (const uint8_t[]){
      0b11100000,
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
    },
    // degree
    (const uint8_t[]){
      0b01000000,
      0b10100000,
      0b01000000,
      0b00000000,
      0b00000000,
      0b00000000,
    },
    // plusminus
    (const uint8_t[]){
      0b01000000,
      0b11100000,
      0b01000000,
      0b00000000,
      0b11100000,
      0b00000000,
    },
    // twosuperior
    (const uint8_t[]){
      0b11000000,
      0b01000000,
      0b10000000,
      0b11000000,
      0b00000000,
      0b00000000,
    },
    // threesuperior
    (const uint8_t[]){
      0b11000000,
      0b01000000,
      0b10000000,
      0b01000000,
      0b10000000,
      0b00000000,
    },
    // acute
    (const uint8_t[]){
      0b00100000,
      0b01000000,
      0b00000000,
      0b00000000,
      0b00000000,
      0b00000000,
    },
    // mu
    (const uint8_t[]){
      0b00000000,
      0b10100000,
      0b10100000,
      0b10100000,
      0b11000000,
      0b10000000,
    },
    // paragraph
    (const uint8_t[]){
      0b01110000,
      0b11010000,
      0b11010000,
      0b01010000,
      0b01010000,
      0b00000000,
    },
    // periodcentered
    (const uint8_t[]){
      0b00000000,
      0b00000000,
      0b01000000,
      0b00000000,
      0b00000000,
      0b00000000,
    },
    // cedilla
    (const uint8_t[]){
      0b00000000,
      0b00000000,
      0b00000000,
      0b00100000,
      0b01000000,
      0b00000000,
    },
    // onesuperior
    (const uint8_t[]){
      0b01000000,
      0b11000000,
      0b01000000,
      0b01000000,
      0b00000000,
      0b00000000,
    },
    // ordmasculine
    (const uint8_t[]){
      0b01000000,
      0b10100000,
      0b01000000,
      0b00000000,
      0b11100000,
      0b00000000,
    },
    // guillemotright
    (const uint8_t[]){
      0b00000000,
      0b10100000,
      0b01010000,
      0b10100000,
      0b00000000,
      0b00000000,
    },
    // onequarter
    (const uint8_t[]){
      0b10000000,
      0b10000000,
      0b10000000,
      0b01010000,
      0b01110000,
      0b00010000,
    },
    // onehalf
    (const uint8_t[]){
      0b10000000,
      0b10000000,
      0b10110000,
      0b00010000,
      0b00100000,
      0b00110000,
    },
    // threequarters
    (const uint8_t[]){
      0b11000000,
      0b01000000,
      0b10000000,
      0b01010000,
      0b10110000,
      0b00010000,
    },
    // questiondown
    (const uint8_t[]){
      0b01000000,
      0b00000000,
      0b01000000,
      0b10000000,
      0b01100000,
      0b00000000,
    },
    // Agrave
    (const uint8_t[]){
      0b10000000,
      0b01000000,
      0b10100000,
      0b11100000,
      0b10100000,
      0b00000000,
    },
    // Aacute
    (const uint8_t[]){
      0b00100000,
      0b01000000,
      0b10100000,
      0b11100000,
      0b10100000,
      0b00000000,
    },
    // Acircumflex
    (const uint8_t[]){
      0b11000000,
      0b01000000,
      0b10100000,
      0b11100000,
      0b10100000,
      0b00000000,
    },
    // Atilde
    (const uint8_t[]){
      0b01100000,
      0b11000000,
      0b10100000,
      0b11100000,
      0b10100000,
      0b00000000,
    },
    // Adieresis
    (const uint8_t[]){
      0b10100000,
      0b01000000,
      0b10100000,
      0b11100000,
      0b10100000,
      0b00000000,
    },
    // Aring
    (const uint8_t[]){
      0b01000000,
      0b01000000,
      0b10100000,
      0b11100000,
      0b10100000,
      0b00000000,
    },
    // AE
    (const uint8_t[]){
      0b01110000,
      0b10100000,
      0b11110000,
      0b10100000,
      0b10110000,
      0b00000000,
    },
    // Ccedilla
    (const uint8_t[]){
      0b01000000,
      0b10100000,
      0b10000000,
      0b10100000,
      0b01000000,
      0b10000000,
    },
    // Egrave
    (const uint8_t[]){
      0b10000000,
      0b11100000,
      0b11000000,
      0b10000000,
      0b11100000,
      0b00000000,
    },
    // Eacute
    (const uint8_t[]){
      0b00100000,
      0b11100000,
      0b11000000,
      0b10000000,
      0b11100000,
      0b00000000,
    },
    // Ecircumflex
    (const uint8_t[]){
      0b01100000,
      0b11100000,
      0b11000000,
      0b10000000,
      0b11100000,
      0b00000000,
    },
    // Edieresis
    (const uint8_t[]){
      0b10100000,
      0b11100000,
      0b11000000,
      0b10000000,
      0b11100000,
      0b00000000,
    },
    // Igrave
    (const uint8_t[]){
      0b10000000,
      0b11100000,
      0b01000000,
      0b01000000,
      0b11100000,
      0b00000000,
    },
    // Iacute
    (const uint8_t[]){
      0b00100000,
      0b11100000,
      0b01000000,
      0b01000000,
      0b11100000,
      0b00000000,
    },
    // Icircumflex
    (const uint8_t[]){
      0b01000000,
      0b11100000,
      0b01000000,
      0b01000000,
      0b11100000,
      0b00000000,
    },
    // Idieresis
    (const uint8_t[]){
      0b10100000,
      0b01000000,
      0b01000000,
      0b01000000,
      0b11100000,
      0b00000000,
    },
    // Eth
    (const uint8_t[]){
      0b11100000,
      0b01010000,
      0b11010000,
      0b01010000,
      0b11100000,
      0b00000000,
    },
    // Ntilde
    (const uint8_t[]){
      0b01010000,
      0b10100000,
      0b11100000,
      0b11100000,
      0b10100000,
      0b00000000,
    },
    // Ograve
    (const uint8_t[]){
      0b10000000,
      0b01000000,
      0b10100000,
      0b10100000,
      0b01000000,
      0b00000000,
    },
    // Oacute
    (const uint8_t[]){
      0b00100000,
      0b01000000,
      0b10100000,
      0b10100000,
      0b01000000,
      0b00000000,
    },
    // Ocircumflex
    (const uint8_t[]){
      0b01000000,
      0b01000000,
      0b10100000,
      0b10100000,
      0b01000000,
      0b00000000,
    },
    // Otilde
    (const uint8_t[]){
      0b01110000,
      0b11100000,
      0b10100000,
      0b10100000,
      0b01000000,
      0b00000000,
    },
    // Odieresis
    (const uint8_t[]){
      0b10100000,
      0b01000000,
      0b10100000,
      0b10100000,
      0b01000000,
      0b00000000,
    },
    // multiply
    (const uint8_t[]){
      0b00000000,
      0b10100000,
      0b01000000,
      0b10100000,
      0b00000000,
      0b00000000,
    },
    // Oslash
    (const uint8_t[]){
      0b01100000,
      0b10100000,
      0b11100000,
      0b10100000,
      0b11000000,
      0b00000000,
    },
    // Ugrave
    (const uint8_t[]){
      0b10000000,
      0b01000000,
      0b10100000,
      0b10100000,
      0b11100000,
      0b00000000,
    },
    // Uacute
    (const uint8_t[]){
      0b00100000,
      0b01000000,
      0b10100000,
      0b10100000,
      0b11100000,
      0b00000000,
    },
    // Ucircumflex
    (const uint8_t[]){
      0b01000000,
      0b00000000,
      0b10100000,
      0b10100000,
      0b11100000,
      0b00000000,
    },
    // Udieresis
    (const uint8_t[]){
      0b10100000,
      0b00000000,
      0b10100000,
      0b10100000,
      0b11100000,
      0b00000000,
    },
    // Yacute
    (const uint8_t[]){
      0b00100000,
      0b00000000,
      0b10100000,
      0b01000000,
      0b01000000,
      0b00000000,
    },
    // Thorn
    (const uint8_t[]){
      0b10000000,
      0b11000000,
      0b10100000,
      0b11000000,
      0b10000000,
      0b00000000,
    },
    // germandbls
    (const uint8_t[]){
      0b01000000,
      0b10100000,
      0b11000000,
      0b10100000,
      0b11100000,
      0b10000000,
    },
    // agrave
    (const uint8_t[]){
      0b10000000,
      0b01000000,
      0b01100000,
      0b10100000,
      0b01100000,
      0b00000000,
    },
    // aacute
    (const uint8_t[]){
      0b00100000,
      0b01000000,
      0b01100000,
      0b10100000,
      0b01100000,
      0b00000000,
    },
    // acircumflex
    (const uint8_t[]){
      0b01100000,
      0b00000000,
      0b01100000,
      0b10100000,
      0b01100000,
      0b00000000,
    },
    // atilde
    (const uint8_t[]){
      0b01010000,
      0b10100000,
      0b01100000,
      0b10100000,
      0b01100000,
      0b00000000,
    },
    // adieresis
    (const uint8_t[]){
      0b10100000,
      0b00000000,
      0b01100000,
      0b10100000,
      0b01100000,
      0b00000000,
    },
    // aring
    (const uint8_t[]){
      0b01000000,
      0b00000000,
      0b01100000,
      0b10100000,
      0b01100000,
      0b00000000,
    },
    // ae
    (const uint8_t[]){
      0b00000000,
      0b01110000,
      0b10110000,
      0b10100000,
      0b01110000,
      0b00000000,
    },
    // ccedilla
    (const uint8_t[]){
      0b00000000,
      0b01000000,
      0b10100000,
      0b10000000,
      0b01100000,
      0b01000000,
    },
    // egrave
    (const uint8_t[]){
      0b10000000,
      0b01000000,
      0b10100000,
      0b11000000,
      0b01100000,
      0b00000000,
    },
    // eacute
    (const uint8_t[]){
      0b00100000,
      0b01000000,
      0b10100000,
      0b11000000,
      0b01100000,
      0b00000000,
    },
    // ecircumflex
    (const uint8_t[]){
      0b11000000,
      0b01000000,
      0b10100000,
      0b11000000,
      0b01100000,
      0b00000000,
    },
    // edieresis
    (const uint8_t[]){
      0b10100000,
      0b01000000,
      0b10100000,
      0b11000000,
      0b01100000,
      0b00000000,
    },
    // igrave
    (const uint8_t[]){
      0b10000000,
      0b01000000,
      0b01000000,
      0b01000000,
      0b11100000,
      0b00000000,
    },
    // iacute
    (const uint8_t[]){
      0b00100000,
      0b11000000,
      0b01000000,
      0b01000000,
      0b11100000,
      0b00000000,
    },
    // icircumflex
    (const uint8_t[]){
      0b01000000,
      0b10100000,
      0b01000000,
      0b01000000,
      0b11100000,
      0b00000000,
    },
    // idieresis
    (const uint8_t[]){
      0b10100000,
      0b00000000,
      0b11000000,
      0b01000000,
      0b11100000,
      0b00000000,
    },
    // eth
    (const uint8_t[]){
      0b10100000,
      0b01000000,
      0b01100000,
      0b10100000,
      0b01000000,
      0b00000000,
    },
    // ntilde
    (const uint8_t[]){
      0b01010000,
      0b10100000,
      0b11000000,
      0b10100000,
      0b10100000,
      0b00000000,
    },
    // ograve
    (const uint8_t[]){
      0b10000000,
      0b01000000,
      0b01000000,
      0b10100000,
      0b01000000,
      0b00000000,
    },
    // oacute
    (const uint8_t[]){
      0b00100000,
      0b01000000,
      0b01000000,
      0b10100000,
      0b01000000,
      0b00000000,
    },
    // ocircumflex
    (const uint8_t[]){
      0b01000000,
      0b00000000,
      0b01000000,
      0b10100000,
      0b01000000,
      0b00000000,
    },
    // otilde
    (const uint8_t[]){
      0b11100000,
      0b00000000,
      0b01000000,
      0b10100000,
      0b01000000,
      0b00000000,
    },
    // odieresis
    (const uint8_t[]){
      0b10100000,
      0b00000000,
      0b01000000,
      0b10100000,
      0b01000000,
      0b00000000,
    },
    // divide
    (const uint8_t[]){
      0b01000000,
      0b00000000,
      0b11100000,
      0b00000000,
      0b01000000,
      0b00000000,
    },
    // oslash
    (const uint8_t[]){
      0b00000000,
      0b01100000,
      0b10100000,
      0b10100000,
      0b11000000,
      0b00000000,
    },
    // ugrave
    (const uint8_t[]){
      0b10000000,
      0b01000000,
      0b10100000,
      0b10100000,
      0b01100000,
      0b00000000,
    },
    // uacute
    (const uint8_t[]){
      0b00100000,
      0b01000000,
      0b10100000,
      0b10100000,
      0b01100000,
      0b00000000,
    },
    // ucircumflex
    (const uint8_t[]){
      0b01000000,
      0b00000000,
      0b10100000,
      0b10100000,
      0b01100000,
      0b00000000,
    },
    // udieresis
    (const uint8_t[]){
      0b10100000,
      0b00000000,
      0b10100000,
      0b10100000,
      0b01100000,
      0b00000000,
    },
    // yacute
    (const uint8_t[]){
      0b00100000,
      0b01000000,
      0b10100000,
      0b11100000,
      0b00100000,
      0b11000000,
    },
    // thorn
    (const uint8_t[]){
      0b10000000,
      0b10000000,
      0b11000000,
      0b10100000,
      0b11000000,
      0b10000000,
    },
  }
};
