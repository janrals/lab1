#include <iostream>

using namespace std;

// Base class
class Shape
{
public:
    // pure virtual function providing interface framework.

    virtual int getArea() = 0;

void setWidth(int w)
{
    width = w;
}

void setHeight(int h)
{
        height = h;
}

    protected:
    int width;
    int height;



};

class Triangle: public Shape
{
public:

    int getArea()
    {
    return (width * height)/2;
    }
};

class Rectangle: public Shape
{
public:

    int getArea()
    {
        return (width * height);
    }
};

class Circle: public Shape
{
public:

    int getArea()
    {
        return (3.14 * width * width);
    }
};
int main(void)
{

    Triangle Tri;
    Rectangle Rec;
    Circle Cir;

    int input;

    Tri.setWidth(5);
    Tri.setHeight(7);
    // Print the area of the object.

    cout << "input legth and width of a rectangle" << endl;

    cout << "Total Triangle area: " << Tri.getArea() << endl;


    cout << "Total area of shapes: " << Tri.getArea() + Cir.getArea() + Rec.getArea() << endl;



    return 0;
}
