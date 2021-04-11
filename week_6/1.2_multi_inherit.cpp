#include<iostream>
using namespace std;
class CIRCLE
{
public:
    int r;
    CIRCLE()
{
    cout<<"Enter radius of Circle"<<endl;
    cin>>r;
}
    void areaCircle()
{

    cout<<"Area of Circle is: "<<3.14*r*r<<endl;
}
};
    class RECTANGLE: public CIRCLE
{
    public:
        int b;
        RECTANGLE()
{
    cout<<"Enter breadth of Rectangle"<<endl;
    cin>>b;
}
    void areaRect()
{
    cout<<"Area of Rectangle is: "<<r*b<<endl;
}

};
    class BOX: public RECTANGLE
{
    public:
    int h;
    BOX()
{
    cout<<"Enter height"<<endl;
    cin>>h;
}
    void volume()
{
    cout<<"Volume is: "<<r*b*h<<endl;
}

};
    int main()
{
    BOX s1;
    s1.areaCircle();
    s1.areaRect();
    s1.volume();
}