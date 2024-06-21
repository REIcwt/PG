#pragma once

class IShape
{
public:
    IShape(const char* name);
    virtual ~IShape();

    virtual float Size() = 0;
    virtual void Draw() = 0;

protected:
    const char* name;
};
