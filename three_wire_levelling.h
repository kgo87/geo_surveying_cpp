#ifndef GEO_SURVEYING_THREE_WIRE_LEVELLING_H
#define GEO_SURVEYING_THREE_WIRE_LEVELLING_H


#include <vector>
#include "three_wire_levelling_solution.h"
#include "sight_point.h"

class ThreeWireLevelling {

public:
    ThreeWireLevellingSolution solve(double benchmark, const std::vector<SightPoint> &sight_points);
};


#endif //GEO_SURVEYING_THREE_WIRE_LEVELLING_H
