#pragma once

#include "area.h"
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>

// Unnecessary, to be removed later.
#include <iostream>

class Rules {
public:
    struct vec2 {
        double x, y;
    };

    Rules();

    void apply_rule(const char* filepath);
    void apply_rule(std::string str_rule);
private:
    std::vector<Area> areas;
    vec2 map_coords;
    double pixel_area;

    void set_pixel_area(std::string pixel_area);
    void set_map_coords(std::string map_coords_x, std::string map_coords_y);
};

std::vector<std::string> parse_rules_file(const char* filepath);
std::vector<std::string> split(std::string line);
