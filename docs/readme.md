# Arduino MKR RGB library


The Arduino MKR RGB library allows you to draw on the [MKR RGB Shield](https://store.arduino.cc/mkr-rgb-shield) using some very basic functions. This library is also the software interface necessary to create more complex graphics using the [ArduinoGraphics](https://www.arduino.cc/en/Reference/ArduinoGraphics) Library.

This library is the one you should use to create the object _YourScreen_ that you find in the examples of the ArduinoGraphics library. You may choose any label for your matrix objetct as far as you use that label instead of _YourScreen_ label. 

To use this library:

```
#include <ArduinoGraphics.h>
#include <Arduino_MKRRGB.h>
```

> **Note: Arduino MKR RGB library depends of the ArduinoGraphics library**. 
