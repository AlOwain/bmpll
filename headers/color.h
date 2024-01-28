#pragma once
#include <cstdint>
#include <ostream>
#include <string>

struct Color {
public:
    struct RGB {
        uint8_t r, g, b;
    };

    Color();
    Color(int r, int g, int b);
    Color(RGB color);
    Color(std::string r, std::string g, std::string b);
    Color(uint8_t r, uint8_t g, uint8_t b);

    void set(int r, int g, int b);
    void set(RGB color);
    void set(std::string r, std::string g, std::string b);
    void set(uint8_t r, uint8_t g, uint8_t b);

    RGB color();

    void operator=(Color right);
    bool operator==(Color right);

    friend std::ostream& operator<<(std::ostream &stream, Color color);
private:
    RGB m_color;
};

uint8_t str_to_u8(std::string str);
