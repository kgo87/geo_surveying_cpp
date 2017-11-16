#include <cmath>
#include "point.h"

std::string Point::to_string() {
    return "(" + std::to_string(x) + "," + std::to_string(y) + ")";
}

static bool are_double_equal(double a, double b) {
    return fabs(a - b) < EPSILON;
}

bool Point::operator==(const Point &other) const {
    return are_double_equal(x, other.x) && are_double_equal(y, other.y);
}
