#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include "Circle.h"

Circle::Circle() : IShape("Circle") {}

Circle::~Circle() {}

float Circle::Size() {
    return float(M_PI) * radius * radius;
}

void Circle::Draw() {
    std::cout << "Circle || Radius: " << radius << " || Area: " << Size() << std::endl;
}
