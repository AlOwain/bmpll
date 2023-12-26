#include "bmp.h"

bmp::bmp(const char *filepath)
{
    read(filepath);
}

Color bmp::get_pixel(int x, int y) { return data[x][y]; }

int bmp::get_height() { return height; }
int bmp::get_width() { return width; }
