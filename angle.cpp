#include <sstream>
#include <iomanip>
#include "angle.h"

std::string Angle::to_string() {
    std::stringstream out;
    out << std::fixed << std::setprecision(4) << seconds;
    return std::to_string(degree) + "˚" + std::to_string(minutes) + "'" + out.str() + "\"";
}

Angle Angle::operator+(const Angle &other) const {
    return from_seconds(to_seconds() + other.to_seconds());
}

Angle Angle::operator-(const Angle &other) const {
    return from_seconds(to_seconds() - other.to_seconds());
}

Angle Angle::operator*(int scalar) const {
    return from_seconds(to_seconds() * scalar);
}

Angle Angle::operator/(int scalar) const {
    return from_seconds(to_seconds() / scalar);
}

bool Angle::operator<(const Angle &other) const {
    return to_seconds() < other.to_seconds();
}

double Angle::to_seconds() const {
    return 3600 * degree + 60 * minutes + seconds;
}

Angle Angle::from_seconds(const double &seconds) const {
    auto d = static_cast<int>(seconds / 3600);
    auto m = static_cast<int>((seconds - d * 3600) / 60);
    double s = seconds - d * 3600 - m * 60;
    return Angle(d, m, s);
}

double Angle::to_decimal() const {
    return degree + minutes / 60 + seconds / 3600;
}
