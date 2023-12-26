#include "bmp/bmp.h"
#include "rule_setter.h"

int main(int argc, char** argv)
{
    rule_setter y("input/example.rules");

    bmp x("input/example-simple.bmp");

    for (int i = 0; i < x.get_height(); i++)
    {
        for (int j = 0; j < x.get_width(); j++)
        {
            std::cout << "("
                    << (int) x.get_pixel(i, j).r << " "
                    << (int) x.get_pixel(i, j).g << " "
                    << (int) x.get_pixel(i, j).b << ") ";
        }
        std::cout << "\n";
    }
    return 0;
}
