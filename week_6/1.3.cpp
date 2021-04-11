#include <iostream>

using namespace std;

class Circle
{
protected:
    double radius{};

public:
    void setRadius(double radius)
    {
        this->radius = radius;
    }

    virtual double getArea()
    {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Circle
{
    protected:
        double breath{};

public:
    void setBreath(double breath)
    {
        this->breath = breath;
    }
    double getArea() override
    {
        return radius * breath;
    }

};

class Cylinder : public Rectangle
{
    public:
    double getCylinder()
    {
        return 3.14 * radius * radius * breath;
    }
};

int main()
{

    Cylinder r;
    r.setRadius(15);
    r.setBreath(10);
    cout <<"Area of cylinder: "<< r.getCylinder() <<endl;

    return 0;
}