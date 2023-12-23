#include "rule_setter.h"

rule_setter::rule_setter(const char* filepath)
{
    std::vector<std::string> instructions = parse_file(filepath);

    for (std::string rule: instructions) apply_rule(rule);
}

void rule_setter::apply_rule(std::string str_rule)
{
    std::vector<std::string> words = split(str_rule);
    
    if (words[0] == "pixel-area")
        pixel_area = std::atof(words[1].c_str()); 
    else if (words[0] == "map-coordinates")
        map_coords = {std::atof(words[1].c_str()),
                      std::atof(words[2].c_str())};
    else
        areas.push_back({
            words[0].c_str(), {
                std::atof(words[1].c_str()),
                std::atof(words[2].c_str()),
                std::atof(words[3].c_str())
            }
        });
}

std::vector<std::string> parse_file(const char* filepath)
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


std::vector<std::string> split(std::string line)
{
    std::vector<std::string> words;
    std::string buffer;
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == '=' || line[i] == ',')
        {
            words.push_back(buffer);
            buffer = "";
        }
        else if (line[i] != ' ')
            buffer += line[i];
    }
    words.push_back(buffer);
    return words;
}
