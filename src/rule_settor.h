#include "area.h"
#include <cstdlib>
#include <fstream>
#include <vector>

// Unnecessary, to be removed later.
#include <iostream>

class rule_settor {
public:
    rule_settor(const char* filepath);

private:
    std::ifstream input;

    std::string parse_next_line();
};

