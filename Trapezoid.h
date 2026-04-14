#include "IFigure2D.h"

class Trapezoid : public IFigure2D {
private:
    double base1, base2, height;
public:
    Trapezoid(double b1, double b2, double h);
    double getArea() const override;
};