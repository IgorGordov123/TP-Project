#include "Circle.h"

Circle::Circle(double r) : radius(r) {}
double Circle::getArea() const {
    return 3.14 * radius * radius;
}