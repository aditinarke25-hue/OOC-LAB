#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Circle : public Shape
{
    float r;

public:
    Circle(float radius)
    {
        r = radius;
    }

    void area() override
    {
        float area1 = 3.14159 * r * r;
        cout << "Area of Circle = " << area1 << endl;
    }
};

class Rectangle : public Shape
{
    float l, b;

public:
    Rectangle(float length, float breadth)
    {
        l = length;
        b = breadth;
    }

    void area() override
    {
        float area2 = l * b;
        cout << "Area of Rectangle = " << area2 << endl;
    }
};

int main()
{
    Circle c(7.0);
    Rectangle r(4.2, 8.0);

    c.area();
    r.area();

    return 0;
}

/*
Area of Circle = 153.938
Area of Rectangle = 33.6*/