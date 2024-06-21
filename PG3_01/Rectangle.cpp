#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle() : IShape("Rectangle") {}

Rectangle::~Rectangle() {}

float Rectangle::Size() {
    return width * height;
}

void Rectangle::Draw() {
    std::cout << "Rectangle || Width: " << width << " || Height: " << height << " || Area: " << Size() << std::endl;
}
