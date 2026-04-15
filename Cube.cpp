#include "Cube.h"

Cube::Cube(double s) : side(s) {}

double Cube::getVolume() const {
    return side * side * side;
}