#pragma once
#include <cstdint>
#include <string>

class Color {
public:
    struct RGB {
        uint8_t r, g, b;
    };

    Color();
    Color(int r, int g, int b);
    Color(RGB color);
    Color(std::string r, std::string g, std::string b);
    Color(uint8_t r, uint8_t g, uint8_t b);

    void set_color(int r, int g, int b);
    void set_color(RGB color);
    void set_color(std::string r, std::string g, std::string b);
    void set_color(uint8_t r, uint8_t g, uint8_t b);

    RGB get_color();
private:
    RGB color;
};

uint8_t str_to_u8(std::string str);
