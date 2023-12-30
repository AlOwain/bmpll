#include "rules.h"

Rules::Rules() {}

void Rules::apply_rule(const char* filepath)
{
    std::vector<std::string> instructions = parse_rules_file(filepath);

    for (std::string rule: instructions) apply_rule(rule);
}

void Rules::apply_rule(std::string str_rule)
{
    std::vector<std::string> words = split(str_rule);
    
    /*
    * FIXME: You must validate the data correctly and,
    * set it in set_pixel_area(), set_map_coords(), and
    * the area should be parsed in its constructor.
    */
    if (words[0] == "pixel-area")
        pixel_area = std::atof(words[1].c_str()); 
    else if (words[0] == "map-coordinates")
        map_coords = {std::atof(words[1].c_str()),
                      std::atof(words[2].c_str())};
    else
        areas.push_back({
            words[0].c_str(), {
                words[1].c_str(),
                words[2].c_str(),
                words[3].c_str()
            }
        });
}

std::vector<std::string> parse_rules_file(const char* filepath)
{
    std::ifstream input(filepath);
    if (!input.is_open()) exit(-1);

    std::string line;
    std::vector<std::string> rules = {};
    while(getline(input, line))
        if (line[0] != '#' && line != "")
            rules.push_back(line);

    input.close();
    return rules;
}


std::vector<std::string> split(std::string line)
{
    std::string buffer;
    std::vector<std::string> words;
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
