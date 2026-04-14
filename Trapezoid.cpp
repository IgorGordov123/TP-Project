#include "Trapezoid.h"

Trapezoid::Trapezoid(double b1, double b2, double h)
    : base1(b1), base2(b2), height(h) {}

double Trapezoid::getArea() const {
    return (base1 + base2) * height / 2;
}