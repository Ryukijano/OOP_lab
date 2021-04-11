#include <iostream>

using namespace std;


class triangle {
    public :
          double base;
          double height;
};

int main()
{
    triangle triangle1;
    triangle triangle2;
    triangle triangle3;
    double area = 0.0;

    triangle1.base = 1.0;
    triangle1.height = 4.0;
    
    triangle2.base = 5.0;
    triangle2.height = 6.0;

    triangle3.base = 7.0;
    triangle3.height = 13.0;
  

    area = 0.5*triangle1.base*triangle1.height;
    cout<<"Area of  the first triangle is : "<< area <<endl;
    area = 0.5*triangle2.base*triangle2.height;
    cout<<"Area of the second triangle is : "<< area <<endl;
    area = 0.5*triangle3.base*triangle3.base*triangle3.height;
    cout<<"Area of the third triangle is : "<< area <<endl;
    return 0;

}

