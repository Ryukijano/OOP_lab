#include<iostream>
using namespace std;
class ABC
{
    public:
        virtual void display()
        {
            cout<<"ABC display function";
        }
        virtual void show()=0;
};
class BBC: public ABC
{
    public:
        void display()
        {
            cout<<"BBC display function"<<endl;
        }
        void show()
        {
            cout<<"BBC show function"<<endl;
        }
};
class KBC: public ABC
{
    public:
        void display()
        {
            cout<<"ABC display function"<<endl;
        }
        void show()
        {
            cout<<"ABC show function"<<endl;
        }
};
int main()
{
    ABC *bptr1;
    BBC s1;
    bptr1=&s1;
    ABC *bptr2;
    KBC s2;
    bptr2=&s2;
    bptr1->display();
    bptr1->show();
    bptr2->display();
    bptr2->show();
}