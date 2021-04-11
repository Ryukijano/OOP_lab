#include <iostream>
using namespace std;
char fun_area(char);
double fun_area(double);
float fun_area(float,float);
float fun_area(float,float,float);
int main()
{
    double r;
    float l,b,length,breadth,height;
    cout<<"Enter the radius of the circle:";
    cin>>r;
    cout<<"Enter the length and breath of the rectangle";
    cin>>l>>b;
    cout<<"Enter the length,breadth and the height of the box:";
    cin>>length>>breadth>>height;
    cout<<"\nThe area of the circle is\n"<<fun_area(r);
    cout<<"\nThe area of the rectangle is\n"<<fun_area(l,b);
    cout<<"\nThe volume of the box is \n"<<fun_area(length,breadth,height);
    return 0;
}
  char fun_area(char)
  {
      cout<<"No data";
      return 0;
  }
  double fun_area(double r)
  {
      return(3.14*r*r);
  }
  float fun_area(float l, float b)
  {
      return(l*b);
  }
  float fun_area(float length,float breadth,float height)
  {
      return(length*breadth*height);
  }
