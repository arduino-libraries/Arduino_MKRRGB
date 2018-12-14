/*
  MKR RGB Matrix Shield - Scroll Text

  This example demonstrates how to display and scroll text
  on the MKR RGB Matrix shield. It continuously scrolls the
  current millis() value on the display.

  The circuit:
  - Arduino MKR board
  - Arduino MKR RGB Matrix Shield attached

  This example code is in the public domain.
*/

#include <MKRRGBMatrix.h>

void setup() {
  // initialize the matrix
  MATRIX.begin();

  // set the brightness, supported values are 0 - 255
  MATRIX.brightness(10);

  // configure the text scroll speed
  MATRIX.textScrollSpeed(125);

  // display some short text without scrolling
  MATRIX.beginText(0, 0, 127, 0, 0); // X, Y, then R, G, B
  MATRIX.print("Hi");
  MATRIX.endText();

  delay(2000);
}

void loop() {
  MATRIX.beginText(0, 0); // use the same color as before
  MATRIX.print("millis=");
  MATRIX.println(millis());
  MATRIX.endText(true); // true parameter here to configure scrolling

  delay(250);
}
