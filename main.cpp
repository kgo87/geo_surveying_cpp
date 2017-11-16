#include <iostream>
#include <vector>
#include "point.h"
#include "angle.h"
#include "horizontal_point.h"
#include "traversing.h"

using namespace std;

int main() {

    Point a = Point(1000, 1000);
    Angle a_azimuth = Angle(90);
    vector<HorizontalPoint> horizontal_points;
    horizontal_points.emplace_back(Angle(314, 45, 44.15), Angle(222, 42, 53.3), 83.103);
    horizontal_points.emplace_back(Angle(175, 20, 26.5), Angle(92, 32, 30), 190.120);
    horizontal_points.emplace_back(Angle(321, 7, 24), Angle(230, 18, 6), 53.115);
    horizontal_points.emplace_back(Angle(343, 29, 6.5), Angle(243, 45, 43.5), 181.748);

    Traverser traversing = Traverser();
    TraversingSolution solution = traversing.solve(a, a_azimuth, horizontal_points);
    cout << solution.to_string() << endl;

    return 0;
}
