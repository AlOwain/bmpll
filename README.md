# Note of Archival

This project will now be archived finally; it will remain under its GNU GPL license, and will be published publicly under its current status; as a final note, the reasoning behind the archival and halt of progress to this project is that I find no meaningful progression to achieve its initial goal. The project works as intended, yet, it does not fill its intended goal; the motivation was to use this project to determine the area a longitude and latitude falls under, given that longitudal and latiudal conversion to 2D coordinates is difficult under mercator projections other methods of solving this matter seem more reasonable, as such I have chosen to pursue simpler alternative solutions, lib\_bmp and lib\_json will continue under the same given progress as it they have wider scope and can be used under different projects.

## Description

_The project does not work yet._

This program is aimed to determine on which area a specific coordinate lies. Speed is an important factor in this project, I realize I could have used a mathematical approach, but this solution seems simpler, and definitely faster.

## Requirements

- [lib\_bmp](https://github.com/AlOwain/lib_bmp)

## Command line arguments

- Rules file path
_to be expanded on later..._

## Input

### Instructions:

#### Rules file:

- Rules can not be named `map-coordinates-tl`, `map-coordinates-br`, `data`, or `map`.
- Every new rule must be inputted in a seperate line.
- You must specify the `map-coordinates-tl` and `map-coordinates-br`, or it will default to (0.0, 0.0) and (1.0, 1.0) respectively; the `map-coordinate-tl` is the coordinate of the pixel on the top left corner, while the `map-coordinates-br` is the coordinate of the pixel on the bottom right corner.
- Colors inputted must be in a (r, g, b) format the red, green, and blue (r, g, b) values should be specified from (0 - 255).
- The data and map file path must be specified within quotation marks '"'.
- All spaces, commented lines and empty lines are ignored. (Commented lines are lines that begin with a '#')

#### Data file:

- The inputted data must be in a .csv file.
- It must be delimitered by either a `,` or a `;` as long as only one is used.
- The latitiude and latitiude columns must be named `lat` and `long` respectively; and the used delimiter will be determined from the first row.

#### Image file:

- The map (image file) must be a 24 (8;8;8) bit file in Windows BMP file format (.bmp)
- It must be added into the instructions of the rule files file.
_to be expanded on later..._

#### A rule is set in this format:

```
(rules' name) = (instruction)
```

#### [This](https://github.com/AlOwain/bmpll/blob/master/input/test/example.rules) is an example of valid instructions
