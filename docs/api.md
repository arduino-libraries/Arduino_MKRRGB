# Arduino MKR RGB library

## Methods

### `begin()`

Initialize the matrix device. 

#### Syntax 

```
MATRIX.begin()
```

#### Parameters

None.

#### Returns

1 on success, 0 on failure.

#### Example

```
if (!MATRIX.begin()) {
    Serial.println("Failed to initialize the display!");
    while (1);
}
```

#### See also

* [end()](#end)
* [brightness()](#brightness)
* [beginDraw()](#beginDraw)
* [endDraw()](#endDraw)
* [set()](#set)

### `end()`

Stops the matrix device.

#### Syntax 

```
MATRIX.end()
```

#### Parameters

None.

#### Returns

None.

#### Example

```
MATRIX.end();
```

#### See also

* [begin()](#begin)
* [brightness()](#brightness)
* [beginDraw()](#beginDraw)
* [endDraw()](#endDraw)
* [set()](#set)

### `brightness()`

Set the brightness of the matrix. 

#### Syntax 

```
MATRIX.brightness(brightness) 
```

#### Parameters

* _brightness_: matrix brightness value to set, 0 to 255.

#### Returns

None.

#### Example

```
MATRIX.brightness(10);
```

#### See also

* [begin()](#begin)
* [end()](#end)
* [beginDraw()](#beginDraw)
* [endDraw()](#endDraw)
* [set()](#set)

### `beginDraw()`

Begins a drawing operation. 

#### Syntax 

```
MATRIX.beginDraw()
```

#### Parameters

None.

#### Returns

None.

#### Example

```
MATRIX.beginDraw();
MATRIX.set(0, 0, 255, 0, 0); // x position, y position, red value, green value, blue value
MATRIX.endDraw();
```

#### See also

* [begin()](#begin)
* [end()](#end)
* [brightness()](#brightness)
* [endDraw()](#endDraw)
* [set()](#set)

### `endDraw()`

Ends a drawing operation.

#### Syntax 

```
MATRIX.endDraw()
```

#### Parameters

None.

#### Returns

None.

#### Example

```
MATRIX.beginDraw();
MATRIX.set(0, 0, 255, 0, 0); // x position, y position, red value, green value, blue value
MATRIX.endDraw();
```

#### See also

* [begin()](#begin)
* [end()](#end)
* [brightness()](#brightness)
* [beginDraw()](#beginDraw)
* [set()](#set)

### `set()`

Set a matrix pixel's color value.

#### Syntax 

```
MATRIX.set(x,y,r,g,b) 
```

#### Parameters

* _x_: x position of the pixel.
* _x_: y position of the pixel.
* _r_: red color value (o to 255) of the pixel.
* _g_: green color value (o to 255) of the pixel.
* _b_: blue color value (o to 255) of the pixel.

#### Returns

None.

#### Example

```
MATRIX.beginDraw();
MATRIX.set(1, 1, 0, 255, 0); // x position, y position, red value, green value, blue value
MATRIX.endDraw();
```

#### See also

* [begin()](#begin)
* [end()](#end)
* [brightness()](#brightness)
* [beginDraw()](#beginDraw)
* [endDraw()](#endDraw)