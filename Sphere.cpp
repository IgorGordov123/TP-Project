#include "Sphere.h"

Sphere::Sphere(double r) : radius(r) {}

double Sphere::getVolume() const {
    return (4.0/3.0) * M_PI * pow(radius, 3);
}