#pragma once

#include "color.h"
#include <fstream>

class BMP {
public:
    BMP(const char *filepath);

    Color pixel(int x, int y);
    int height();
    int width();
private:

    void read(const char *filepath);
    uint32_t m_height, m_width;
    uint16_t bit_depth;
    Color **data;
};
