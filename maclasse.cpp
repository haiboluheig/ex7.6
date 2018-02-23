#include <cstdlib>
#include<math.h>

#include"maclasse.h"
using namespace std;

const float PI = 3.1416;

Point::Point(float a, float b) {
    x = a;
    y = b;
    r = sqrt(x * x + y * y);
    if (x > 0)
        angle = y >= 0 ? atan(y / x) : (atan(y / x) + 2 * PI);
    else
        angle = asin(-y / r) + PI;
}

void Point::deplacer(float dx, float dy) {
    this->x += dx;
    this->y += dy;
}

void Point::rotation(float angle) {
    const float PRECISION = 0.0001;
    this->angle += angle;
    while (this->angle > (2 * PI - PRECISION)) {
        if (abs(2 * PI - this->angle) <= PRECISION)
            this->angle = 2 * PI;
        this->angle -= 2 * PI;
    }
    this->x = r * cos(this->angle);
    this->y = r * sin(this->angle);
}

float Point::abcisse() const {
    return x;
}

float Point::ordonnee() const {
    return y;
}

float Point::rho() const {
    return r;
}

float Point::thelta() const {
    return angle;
}