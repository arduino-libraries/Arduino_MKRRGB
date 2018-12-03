/*
  MKR RGB Matric Shield - Scroll Text

  This example demonstrates how to scroll text on the
  MKR RGB Matrix shield. It continuously scrolls the
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

  // configure the text (R, G, B) and scroll speed
  MATRIX.textColor(100, 0, 0);
  MATRIX.textScroll(100);
  // the start X an Y position of the can be configured
  //MATRIX.textPosition(0, 1);
  // the background color can also be set
  //MATRIX.background(0, 0, 50);
}

void loop() {
  // the matrix will scroll the text when a new line is sent
  // or or MATRIX.flush() is called
  MATRIX.print("millis = ");
  MATRIX.println(millis());

  delay(250);
}
