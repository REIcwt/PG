#pragma once
#include "IShape.h"

class Rectangle : public IShape {
public:
    Rectangle();
    ~Rectangle();

    float Size() override;
    void Draw() override;

private:
    float width = 6.0f;
    float height = 4.0f;
};
