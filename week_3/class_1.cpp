#include <iostream>
using namespace std;
class measure 
{
    public:
    void funArea(float r);
    void funArea(float l, float b);
    void funArea(float t, float d, float e);
};
void measure::funArea(float r)
{
    cout<<"area of the circle"<<3.14*r*r;
}
void measure::funArea(float l, float b)
{
    cout<<"area of the rectangle is"<<l*b;
}
void measure::funArea(float t, float d, float e)
{
    cout<<"Volume of a box is "<<t*d*e;
}

int main() {
    int ch;
    float r,l,b,t,d,e;
    measure obj;
    cout<<"\n\n1. area of circle";
    cout<<"\n2. area of rectangle";
    cout<<"\n3. volume of a box";
    cout<<"\n\tEnter your choice ";
    cin>>ch;
    switch(ch)
    {
        case 1:
                cout<<"enter the value of radius of the circle \n";
                cin>>r;
                obj.funArea(r);
                break;
        case 2:
                cout<<"enter the sides of rectangle \n";
                cin>>l>>b;
                obj.funArea(l,b);
                break;
        case 3:
                cout<<"enter the sides of the box \n";
                cin>>t>>d>>e;
                obj.funArea(t,d,e);
                break;
        default:
                cout<<"\nThe choice entered is a wrong choice";
    }
    return 0;
}