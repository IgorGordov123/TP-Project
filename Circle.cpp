#include "Circle.h"

Circle::Circle(double r) : radius(r) {}

double Circle::getArea() const {
    return 3.1415926 * radius * radius;
}