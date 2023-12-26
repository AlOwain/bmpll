#pragma once

#include "../color/color.h"
#include <fstream>

class BMP {
public:
    BMP(const char *filepath);

    Color get_pixel(int x, int y);
    int get_height();
    int get_width();
private:

    void read(const char *filepath);
    uint32_t height, width;
    uint16_t bit_depth;
    Color **data;
};
