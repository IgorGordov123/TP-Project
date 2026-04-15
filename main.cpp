#include <iostream>
#include "Square.h"
#include "Circle.h"
#include "Trapezoid.h"
#include "Polygon.h"
#include "Cube.h"
#include "Sphere.h"

int main() {
    int choice;
    std::cout << "Выберите фигуру:\n";
    std::cout << "1. Квадрат\n2. Круг\n3. Трапеция\n4. Многоугольник\n5. Объем куба\n6. Объем сферы\n";
    std::cin >> choice;

    switch(choice) {
        case 1: {
            double s;
            std::cout << "Введите сторону квадрата: ";
            std::cin >> s;
            Square square(s);
            std::cout << "Площадь квадрата: " << square.getArea() << "\n";
            break;
        }
        case 2: {
            double r;
            std::cout << "Введите радиус круга: ";
            std::cin >> r;
            Circle circle(r);
            std::cout << "Площадь круга: " << circle.getArea() << "\n";
            break;
        }
        case 3: {
            double b1, b2, h;
            std::cout << "Введите основание 1: ";
            std::cin >> b1;
            std::cout << "Введите основание 2: ";
            std::cin >> b2;
            std::cout << "Введите высоту: ";
            std::cin >> h;
            Trapezoid trap(b1, b2, h);
            std::cout << "Площадь трапеции: " << trap.getArea() << "\n";
            break;
        }
        case 4: {
            int n;
            std::cout << "Введите количество сторон: ";
            std::cin >> n;
            std::vector<double> sides(n);
            for (int i=0; i<n; ++i) {
                std::cout << "Введите длину стороны " << i+1 << ": ";
                std::cin >> sides[i];
            }
            Polygon polygon(sides);
            std::cout << "Площадь многоугольника: " << polygon.getArea() << "\n";
            break;
        }
        case 5: {
            double s;
            std::cout << "Введите сторону куба: ";
            std::cin >> s;
            Cube cube(s);
            std::cout << "Объем куба: " << cube.getVolume() << "\n";
            break;
        }
        case 6: {
            double r;
            std::cout << "Введите радиус сферы: ";
            std::cin >> r;
            Sphere sphere(r);
            std::cout << "Объем сферы: " << sphere.getVolume() << "\n";
            break;
        }
        default:
            std::cout << "Неверный выбор\n";
    }
    return 0;
}


