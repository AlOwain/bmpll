#include "bmp/bmp.h"
#include "rules/rules.h"

int main(int argc, char** argv)
{
    Rules y;
    y.apply_rule("input/example.rules");

    BMP x("input/example.bmp");

    return 0;
}
