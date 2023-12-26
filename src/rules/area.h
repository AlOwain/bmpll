#pragma once

#include "../bmp/bmp.h"
#include "../color/color.h"
#include <string>

class area {
public:
    area(std::string name, Color color);
private:
    std::string name;
    Color color;
};
