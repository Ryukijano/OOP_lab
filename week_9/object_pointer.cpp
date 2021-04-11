#include <iostream>

using namespace std;

class item
{
    int it,price;
public:
    item()
    {
        it=price=0;
    }
    void store(int i,int j)
    {
        it=i;
        price=j;
    }
    void display()
    {
        cout<<"\nItem number:"<<it<<"\tPrice:"<<price;
    }
};
int main()
{
    item i;
    item *a;
    i.store(150093,1500);
    i.display();
    a=&i;
    a->store(231452,2000);
    a->display();
    return 0;
}






