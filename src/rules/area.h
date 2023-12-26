#pragma once

#include "../bmp/bmp.h"
#include "../color/color.h"
#include <string>

class Area {
public:
    Area(std::string name, Color color);
private:
    std::string name;
    Color color;
};
