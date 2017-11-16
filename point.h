#ifndef GEO_SURVEYING_POINT_H
#define GEO_SURVEYING_POINT_H


#include <string>

using namespace std;

static const double EPSILON = 1E-6;

struct Point {

    double x;
    double y;

    explicit Point(double x = 0, double y = 0) : x(x), y(y) {}

    bool operator==(const Point &other) const;

    string to_string();

};


#endif //GEO_SURVEYING_POINT_H
