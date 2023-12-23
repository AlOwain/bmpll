#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>

// Unnecessary, to be removed later.
#include <iostream>

class rule_settor {
public:
    rule_settor(const char* filepath);
};

std::vector<std::string> parse_next_line(const char* filepath);
