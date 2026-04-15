#include "IFigure2D.h"

class Square : public IFigure2D {
private:
    double side;
public:
    Square(double s);
    double getArea() const override;
};
