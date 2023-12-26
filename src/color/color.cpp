#include "color.h"

Color::Color() : Color(255, 255, 255) {}
Color::Color(int r, int g, int b) { set_color(r, g, b); }
Color::Color(uint8_t r, uint8_t g, uint8_t b) { set_color(r, g, b); }

void Color::set_color(int r, int g, int b)
{
    if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255) exit(-1);
    set_color(static_cast<uint8_t>(r), static_cast<uint8_t>(g), static_cast<uint8_t>(b));
}

void Color::set_color(uint8_t r, uint8_t g, uint8_t b)
{
    this->r = r;
    this->g = g;
    this->b = b;
}
