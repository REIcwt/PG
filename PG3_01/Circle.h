#pragma once
#include "IShape.h"

class Circle : public IShape {
public:
    Circle();
    ~Circle();

    float Size() override;
    void Draw() override;

private:
    float radius = 5.0f;
};
