#include "area.h"

Area::Area(std::string name, Color color)
{
    this->name = name;
    this->color = color;
}

std::string Area::get_name() { return name; }
Color Area::get_color() { return color; }
