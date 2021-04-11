#include<iostream>
using namespace std;

template<class T>
class A
{
    public:
    T e;
    T f;
    A(T x, T y)
    {
        e=x;
        f=y;
    }
    void swap()
    {
        T temp;
        temp=e;
        e=f;
        f=temp;
        cout<<"\nSwapped values:"<<e<<"\t"<<f;
    }
};
int main()
{
    A<int> any(5,6);
    any.swap();
    A<float> an(3.2,5.1);
    an.swap();
    return 0;
}