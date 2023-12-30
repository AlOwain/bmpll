#include "../headers/bmp.h"
#include "rules/rules.h"

int main(int argc, char** argv)
{
    Rules y;
    y.apply_rule("input/example.rules");

    BMP x("input/example.bmp");

    std::cout << x.get_width() << std::endl;
    std::cout << x.get_height() << std::endl;
    Color::RGB z = x.get_pixel(1, 1).get_color();
    std::cout << (int) z.r << " " << (int) z.g << " " << (int) z.b << std::endl;
    return 0;
}
