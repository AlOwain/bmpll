#include "rules.h"

Rules::Rules() {}

void Rules::apply_rule(const char* filepath)
{
    std::vector<std::string> instructions = parse_rules_file(filepath);

    for (std::string rule: instructions) apply_rule(rule);
    vec2<double> s = {39.57189529, 23.22353345};

    vec2<double> f = abs(s - map_coords.br) / abs(map_coords.tl - map_coords.br);
    vec2<double> j = {f.x * map->height(), f.y * map->width()};
    std::cout << j << std::endl;
    std::cout << map->pixel(j.x, j.y) << std::endl;
}

void Rules::apply_rule(std::string str_rule)
{
    std::vector<std::string> words = split(str_rule);

    /*
    * FIXME: You must validate the data correctly and,
    * set it in set_pixel_area(), set_map_coords(), and
    * the area should be parsed in its constructor.
    */
    if (words[0] == "map-coordinates")
        set_map_size({words[2], words[1]},
                       {words[4], words[3]});
    else if (words[0] == "map")
        map = new BMP("input/test.bmp");
    // TODO: impelement reading data file.
    else if (words[0] == "data")
        std::cout << words[1] << std::endl;
    else
        areas.push_back({
            words[0].c_str(), {
                words[1].c_str(),
                words[2].c_str(),
                words[3].c_str()
            }
        });
}

std::string Rules::get_area_name(Color color)
{
    for (int i = 0; i < areas.size(); i++)
        if (color == areas[i].color())
            return areas[i].name();
    return "";
}

void Rules::set_map_size(vec2<std::string> top_left, vec2<std::string> bottom_right)
{
    map_coords.tl = {std::atof(top_left.x.c_str()), std::atof(top_left.y.c_str())}; 
    map_coords.br = {std::atof(bottom_right.x.c_str()), std::atof(bottom_right.y.c_str())};
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

// TODO: handle negative numbers
double to_double(std::string str)
{
    int index_char;
    bool point;
    double integer, fraction = 0.1;
    for (int i = 0; i < str.size(); i++)
    {
        index_char = ((int) str[i]);
        if (index_char == 46) point = true;

        // 48 is the ASCII code for 0
        // 57 is the ASCII code for 9
        // TODO: should throw error
        else if (index_char < 48 || index_char > 57) exit(-1);

        else if (!point) integer = (integer * 10) + (index_char - 48);
        else
        {
            integer += (index_char - 48) * fraction;
            fraction /= 10;
        }
    }
    return integer;
}
