﻿#include "IFigure2D.h"
#include <cmath>

class Circle : public IFigure2D {
private:
    double radius;
public:
    Circle(double r);
    double getArea() const override;
};