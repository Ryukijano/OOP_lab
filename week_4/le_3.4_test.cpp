#include<iostream>
using namespace std;
class time1
{
 int hours;
 int minute;
 public:
 void getdata(int h,int m)
 {
 hours=h;
 minute=m;
 }
 void putdata(void)
 {
 cout<<"Hours:"<<hours<<" and ";
 cout<<"Minute:"<<minute<<"\n";
 }
 void sum(time1,time1);
};
void time1::sum(time1 t1,time1 t2)
{
 minute=t1.minute+t2.minute;
 hours=minute/60;
 minute=minute%60;
 hours=hours+t1.hours+t2.hours;
}
int main()
{
 time1 t1,t2,t3;
 t1.getdata(2,30);
 t2.getdata(1,45);
 t3.sum(t1,t2);
 cout<<"first entered time=";t1.putdata();
 cout<<"second entered time=";t2.putdata();
 cout<<"Adddition of the both time=";t3.putdata();
 return 0;
}