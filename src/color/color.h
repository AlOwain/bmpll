#pragma once
#include <cstdint>
#include <cstdlib>

class Color {
public:
    Color();
    Color(int r, int g, int b);
    Color(uint8_t r, uint8_t g, uint8_t b);

    char* to_hex();
    void set_color(int r, int g, int b);
    void set_color(uint8_t r, uint8_t g, uint8_t b);
private:
    uint8_t r, g, b;
};
