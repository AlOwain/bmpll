#include "../headers/bmp.h"
#include "rules/rules.h"
#include "iostream"


int main(int argc, char** argv)
{
    Rules y;
    y.apply_rule(argv[1]);
    
    return 0;
}
