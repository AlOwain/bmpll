#include "area.h"

Area::Area(std::string name, Color color)
{
    this->m_name = name;
    this->m_color = color;
}

std::string Area::name() { return m_name; }
Color Area::color() { return m_color; }
