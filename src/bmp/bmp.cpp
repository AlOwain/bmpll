#include "bmp.h"

BMP::BMP(const char *filepath)
{
    read(filepath);
}

Color BMP::get_pixel(int x, int y) { return data[x][y]; }

int BMP::get_height() { return height; }
int BMP::get_width() { return width; }
