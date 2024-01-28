#pragma once
#include <ostream>

template <typename T>
class vec2 {
public:
    T x, y;

    vec2<double> operator-(vec2<double> right) { return { x - right.x, y - right.y }; }
    vec2<double> operator*(vec2<double> right) { return { x * right.x, y * right.y }; }
    vec2<double> operator/(vec2<double> right) { return { x / right.x, y / right.y }; }

    friend std::ostream& operator<<(std::ostream& stream, vec2 vector)
    {
        return stream << "(" << vector.x << ", " << vector.y << ")";
    }
};

inline double abs(double x) { return x > 0 ? x : x * -1; };
inline vec2<double> abs(vec2<double> vector) { return { abs(vector.x), abs(vector.y) }; }

struct vec4 {
    union {
        struct { vec2<double> tl, br; };
        struct { double x, y, z, w; };
    };
};
