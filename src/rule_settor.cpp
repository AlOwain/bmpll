#include "rule_settor.h"

rule_settor::rule_settor(const char* filepath)
{
    input.open(filepath);
    if (!input.is_open()) exit(-1);
    
    std::string next_line = parse_next_line();

    input.close();
}

std::string rule_settor::parse_next_line()
{
    std::string line;
    while(getline(input, line))
        if (line[0] != '#' && line != "")
            return line;
    return "";
}
