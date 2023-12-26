#include "bmp/bmp.h"
#include "rules/rules.h"

int main(int argc, char** argv)
{
    rules y;
    y.apply_rule("input/example.rules");

    bmp x("input/example.bmp");

    return 0;
}
