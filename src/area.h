#pragma once

#include <string>

class area {
public:
    struct color {
        double r, g, b;
    };

    area(std::string name, color color);
private:
    std::string name;
    struct color color;
};
