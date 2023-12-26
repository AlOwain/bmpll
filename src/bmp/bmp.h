#include <cstdint>
#include <fstream>

class bmp {
public:
    struct color {
        uint8_t r;
        uint8_t g;
        uint8_t b;
    };

    bmp(const char *filepath);

    color get_pixel(int x, int y);
    int get_height();
    int get_width();
private:

    void read(const char *filepath);
    uint32_t height, width;
    uint16_t bit_depth;
    color **data;
};
