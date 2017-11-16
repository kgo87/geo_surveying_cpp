#ifndef GEO_SURVEYING_TRAVERSING_SOLUTION_H
#define GEO_SURVEYING_TRAVERSING_SOLUTION_H


#include <vector>
#include "angle.h"
#include "point.h"

using namespace std;

struct TraversingSolution {

    vector<Angle> internal_angles;
    Angle geometrical_sum;
    Angle measured_sum;
    Angle misclosure;
    Angle distributed_misclosure;
    vector<Angle> corrected_internal_angles;
    vector<Angle> azimuths;
    vector<double> delta_x;
    vector<double> delta_y;
    double sum_delta_x;
    double sum_delta_y;
    double linear_misclosure_w;
    double total_length;
    double relative_precision;
    double corrected_x;
    double corrected_y;
    bool check;
    vector<Point> points;

    string to_string();
};


#endif //GEO_SURVEYING_TRAVERSING_SOLUTION_H
