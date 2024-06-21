#include <iostream>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {
    Circle circle;
    Rectangle rectangle;

    circle.Draw();
    rectangle.Draw();

    return 0;
}
