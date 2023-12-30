#pragma once

#include "../../headers/bmp.h"
#include "../../headers/color.h"
#include <string>

class Area {
public:
    Area(std::string name, Color color);
private:
    std::string name;
    Color color;
};
