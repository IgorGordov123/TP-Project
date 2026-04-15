#include "IFigure2D.h"
#include <vector>

class Polygon : public IFigure2D {
private:
    std::vector<double> sides;
public:
    Polygon(const std::vector<double>& sides);
    double getArea() const override;
};