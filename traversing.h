#ifndef GEO_SURVEYING_TRAVERSING_H
#define GEO_SURVEYING_TRAVERSING_H


#include <vector>
#include "traversing_solution.h"
#include "point.h"
#include "angle.h"
#include "horizontal_point.h"

class Traverser {

public:
    TraversingSolution solve(Point a, Angle a_azimuth, const std::vector<HorizontalPoint> &horizontal_points);
};


#endif //GEO_SURVEYING_TRAVERSING_H
