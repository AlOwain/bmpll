#include "../headers/bmp.h"
#include "rules/rules.h"
#include "iostream"


int main(int argc, char** argv)
{
    Rules y;
    y.apply_rule(argv[1]);

    BMP x(argv[2]);

    for (int i = 0; i < x.get_height(); i++)
    {
        for (int j = 0; j < x.get_width(); j++)
            std::cout << y.get_area_name(x.get_pixel(i, j)) << " ";
        std::cout << "\n";
    }
    return 0;
}
