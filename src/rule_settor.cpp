#include "rule_settor.h"

rule_settor::rule_settor(const char* filepath)
{
    std::vector<std::string> next_line = parse_next_line(filepath);
}

std::vector<std::string> parse_next_line(const char* filepath)
{
    std::ifstream input(filepath);
    if (!input.is_open()) exit(-1);

    std::vector<std::string> rules = {};
    std::string line;
    while(getline(input, line))
        if (line[0] != '#' && line != "")
            rules.push_back(line);

    input.close();
    return rules;
}
