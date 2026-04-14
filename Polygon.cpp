#include "Polygon.h"

Polygon::Polygon(const std::vector<double>& s) : sides(s) {}

double Polygon::getArea() const {
    int n = sides.size();
    if (n < 3) return 0;

    double perimeter = 0;
    for (double side : sides) {
        perimeter += side;
    }
    double s = perimeter / n;
    double apothem = s / (2 * tan(3.1415926 / n));
    return (n * s * apothem) / 2;
}