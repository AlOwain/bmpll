#pragma once

#include "../../headers/bmp.h"
#include "../../headers/color.h"
#include <string>

class Area {
public:
    Area(std::string name, Color color);

    std::string get_name();
    Color get_color();
private:
    std::string name;
    Color color;
};
