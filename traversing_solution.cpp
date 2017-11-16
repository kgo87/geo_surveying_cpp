#include <sstream>
#include <iomanip>
#include "traversing_solution.h"

using namespace std;

void println(stringstream &out) {
    out << endl;
}

void println(stringstream &out, double d) {
    out << fixed << setprecision(4) << d << endl;
}

template<typename T>
void println(stringstream &out, T t) {
    out << t << endl;
}

string TraversingSolution::to_string() {
    stringstream out;

    println(out, "Internal Angles:");
    for (auto &internal_angle : internal_angles) {
        println(out, internal_angle.to_string());
    }

    println(out);
    println(out, "Geometrical Sum:");
    println(out, geometrical_sum.to_string());

    println(out);
    println(out, "Measured Sum:");
    println(out, measured_sum.to_string());

    println(out);
    println(out, "Misclosure:");
    println(out, misclosure.to_string());

    println(out);
    println(out, "Distributed Misclosure:");
    println(out, distributed_misclosure.to_string());

    println(out);
    println(out, "Corrected Internal Angles:");
    for (auto &corrected_internal_angle : corrected_internal_angles) {
        println(out, corrected_internal_angle.to_string());
    }

    println(out);
    println(out, "Azimuths:");
    for (auto &azimuth : azimuths) {
        println(out, azimuth.to_string());
    }

    println(out);
    println(out, "∆X:");
    for (auto &x : delta_x) {
        println(out, x);
    }

    println(out);
    println(out, "∆Y:");
    for (auto &y : delta_y) {
        println(out, y);
    }

    println(out);
    println(out, "∑∆X:");
    println(out, sum_delta_x);

    println(out);
    println(out, "∑∆Y:");
    println(out, sum_delta_y);

    println(out);
    println(out, "W (Linear Misclosure):");
    println(out, linear_misclosure_w);

    println(out);
    println(out, "Total Length:");
    println(out, total_length);

    println(out);
    println(out, "Relative Precision:");
    println(out, relative_precision);

    println(out);
    println(out, "Corrected X:");
    println(out, corrected_x);

    println(out);
    println(out, "Corrected Y:");
    println(out, corrected_y);

    println(out);
    println(out, "Check:");
    println(out, check);

    println(out);
    println(out, "Points:");
    for (auto &point : points) {
        println(out, point.to_string());
    }

    return out.str();
}