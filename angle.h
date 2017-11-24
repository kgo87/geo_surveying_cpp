#ifndef GEO_SURVEYING_ANGLE_H
#define GEO_SURVEYING_ANGLE_H


#include <string>

struct Angle {

    int degree;
    int minutes;
    double seconds;

    explicit Angle(int degree = 0, int minutes = 0, double seconds = 0.0) : degree(degree),
                                                                            minutes(minutes),
                                                                            seconds(seconds) {}

    Angle operator+(const Angle &other) const;

    Angle operator-(const Angle &other) const;

    Angle operator*(int scalar) const;

    Angle operator/(int scalar) const;

    bool operator<(const Angle &other) const;

    double to_seconds() const;

    Angle from_seconds(const double &seconds) const;

    double to_decimal() const;

    std::string to_string();

};


#endif //GEO_SURVEYING_ANGLE_H
