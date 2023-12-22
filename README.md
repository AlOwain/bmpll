## Description

This program is aimed to determine on which area a specific coordinate lies. Speed is an important factor in this project, I realize I could have used a mathematical approach, but this solution seems simpler, and definitely faster.

## Input

### Image file:

_to be specified later_

### Rules file:

- All lines that begin with a "#" are ignored.

- The input image must be square.

- You must specify the `pixel-area` or it will default to (1.0).

- You must specify the `map-coordinates`, or it will default to (0.0, 0.0); the map coordinate is the coordinate of the pixel on the top left corner.

- Colors inputted must be in a r, g, b format the red, green, and blue values must be specified from (0.0 - 1.0).

- Every new rule must be inputted in a seperate line.

- All spaces and empty lines are ignored.

- Rule names must be unique.

##### The pixel-area is:

```
(the longitude at the start - the longitude at the end / the pixel count)
```
Or equally (since the input image is a square image):
```
(the latitude at the start - the latitude at the end / the pixel count)
```

##### A rule is set in this format:

```
(rule's name) = (instruction)
```

##### Those are all valid instructions:

```
pixel-area = 0.000023
map-coordinates = 31.324644, 20.04920134

Area = 1.0, 1.0, 1.0
aREa2 = 1.0, 0.0, 0.0
_area3 = 0.0, 1.0, 0.0
4 = 0.0, 0.0, 1.0
```
