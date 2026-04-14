#include <cmath>
#include <iostream>
#include "Area_of_regular_n_angled_polygon.h"
using namespace std;

Area_of_regular_n_angled_polygon::Area_of_regular_n_angled_polygon(int n, float a) {
    this->n = n;
    this->a = a;
}

void Area_of_regular_n_angled_polygon::square() {
    float S = n * a * a / tan(3.14159 / n) / 4;
    cout << "Площадь = " << S << endl;
}