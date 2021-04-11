#include<iostream>
using namespace std;
template<class T,class U> void fun(T a,U b)
{
    std::cout<<"Sum of a and b:"<<a+b<<std::endl;
}
template<class T,class U,class Z> void fun(T a,U b,Z c)
{
    std::cout<<"Sum of a, b and c:"<<a+b+c<<std::endl;
}

int main()
{
    fun (20,30);
    fun(10,30.5,40);
    return 0;
}