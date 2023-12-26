#pragma once

#include "bmp/bmp.h"
#include <string>

class area {
public:
    area(std::string name, bmp::color color);
private:
    std::string name;
    bmp::color color;
};
