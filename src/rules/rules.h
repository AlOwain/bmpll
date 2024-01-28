#pragma once

#include "area.h"
#include "../vec.h"

#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>

// Unnecessary, to be removed later.
#include <iostream>

class Rules {
public:
    Rules();

    void apply_rule(const char* filepath);
    void apply_rule(std::string str_rule);

    std::string get_area_name(Color color);
private:
    BMP *map;
    std::vector<Area> areas;
    vec4 map_coords;

    void set_map_size(vec2<std::string> top_left, vec2<std::string> bottom_right);
};

std::vector<std::string> parse_rules_file(const char* filepath);
std::vector<std::string> split(std::string line);
double to_double(std::string str);
