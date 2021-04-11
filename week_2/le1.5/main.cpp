#include<iostream>
using namespace std;

float intrst(float p,float r=10,float t=20)
{
    float c;
    c = (p*t*r)/100;
    return c;
}

int main ()
{
    cout<<intrst(2)<<endl;
    cout<<intrst(2,5)<<endl;
    cout<<intrst(2,6,9)<<endl;
    return 0;
}