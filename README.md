## Description

This program is aimed to determine on which area a specific coordinate lies. Speed is an important factor in this project, I realize I could have used a mathematical approach, but this solution seems simpler, and definitely faster.

## Command line arguments

- Rules file path
- Image file path

_to be expanded on later..._

## Input

### Image file:

- The input image must be square.

_to be expanded on later..._

### Rules file:

- Rules can not be named `pixel-area` or `map-coordinates`.
- Every new rule must be inputted in a seperate line.
- You must specify the `pixel-area` or it will default to (1.0).
- You must specify the `map-coordinates`, or it will default to (0.0, 0.0); the map coordinate is the coordinate of the pixel on the top left corner.
- Colors inputted must be in a (r, g, b) format the red, green, and blue (r, g, b) values should be specified from (0 - 255).
- All spaces, commented lines and empty lines are ignored. (Commented lines are lines that begin with a '#')

#### The pixel-area is:

```
(the longitude at the start - the longitude at the end / the pixel count)
```
Or equally _(since the input image should be a square image):_
```
(the latitude at the start - the latitude at the end / the pixel count)
```

#### A rule is set in this format:

```
(rules' name) = (instruction)
```

#### This is an example of valid instructions:

```
pixel-area = 0.000023
map-coordinates = 31.324644, 20.04920134

Area = 1.0, 1.0, 1.0
aREa2 = 1.0, 0.0, 0.0
_area3 = 0.0, 1.0, 0.0
4 = 0.0, 0.0, 1.0
```
