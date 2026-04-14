#include "IFigure2D.h"

class Area_of_regular_n_angled_polygon : public IFigure2D {
private:
    int n;
    float a;

public:
    Area_of_regular_n_angled_polygon(int n, float a);
    void square() override;
};