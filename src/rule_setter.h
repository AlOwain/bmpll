#pragma once

#include "area.h"
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>

// Unnecessary, to be removed later.
#include <iostream>

class rule_setter {
public:
    struct vec2 {
        double x, y;
    };

    rule_setter(const char* filepath);

    void apply_rule(std::string str_rule);
private:
    std::vector<area> areas;
    vec2 map_coords;
    double pixel_area;

    void set_pixel_area(std::string pixel_area);
    void set_map_coords(std::string map_coords_x, std::string map_coords_y);
};

std::vector<std::string> parse_file(const char* filepath);
std::vector<std::string> split(std::string line);
