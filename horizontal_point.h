#ifndef GEO_SURVEYING_HORIZONTALPOINT_H
#define GEO_SURVEYING_HORIZONTALPOINT_H


#include <string>
#include "angle.h"

struct HorizontalPoint {

    Angle left_angle;
    Angle right_angle;
    double right_distance;

    explicit HorizontalPoint(Angle left_angle, Angle right_angle, double right_distance) : left_angle(left_angle),
                                                                                           right_angle(right_angle),
                                                                                           right_distance(
                                                                                                   right_distance) {}

    std::string to_string();

};


#endif //GEO_SURVEYING_HORIZONTALPOINT_H
