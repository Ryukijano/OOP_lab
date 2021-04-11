#include<iostream>
using namespace std;
class Rectangle
{
    int l,b;
    public:
    void input()
    {
        cout<<"Enter Length and Breadth:";
        cin>>l>>b;
    }
    friend class RectArea;
};
class RectArea
{
    public:
    void area(Rectangle &a)
    {
        cout<<"Area is: "<<a.l*a.b;
    }
};
int main()
{
    Rectangle a;
    RectArea b;
    a.input();
    b.area(a);
    return 0;
}