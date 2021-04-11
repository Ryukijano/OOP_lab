#include <iostream>
#include <conio.h>
using namespace std;
class STUDENT
{
public: int reg,age;
        char name[30];
        void read_data();
};

class UGSTUDENT : public STUDENT
{
  public: int stipend, sem;
          float fees;
          void read_data();
};
class PGSTUDENT : public STUDENT
{
  public: int stipend, sem;
          float fees;
          void read_data();
};

void STUDENT::read_data()
{
  cout<<"\n Enter name:";
  cin>>name;
  cout<<"\n Enter Reg.no: ";
  cin>>reg;
  cout<<"\n Enter age:";
  cin>>age;
}

void UGSTUDENT::read_data()
{
  STUDENT::read_data();
  cout<<"\n Enter the sem:";
  cin>>sem;
  cout<<"\n Enter the fees:";
  cin>>fees;
  cout<<"\n Enter the stipend:";
  cin>>stipend;
}

void PGSTUDENT::read_data()
{
  STUDENT::read_data();
  cout<<"\n Enter the sem:";
  cin>>sem;
  cout<<"\n Enter the fees:";
  cin>>fees;
  cout<<"\n Enter the stipend:";
  cin>>stipend;
}

int main()
{
  UGSTUDENT ug[30];
  PGSTUDENT pg[30];
  int i,n,m;
  float average;
  cout<<"\n Enter the no. of entities in the UGSTUDENT class:";
  cin>>n;
  for(i=1; i<=n; i++)
  ug[i].read_data();
  for(int sem=1; sem<=8; sem++)
  {
    float sum=0;
    int found=0, count=0;
    for(i=1; i<=n; i++)
    {
      if(ug[i].sem==sem)
      {
        sum=sum+ug[i].age;
        found=1;
        count++;
      }
    }
    if(found==1)
    {
      average=sum/count;
      cout<<"\n Average age in sem "<<sem<<" is: "<<average;
    }
  }
  cout<<"\n Enter the no. of entities of PGSTUDENT class:";
  cin>>n;
  for(i=1; i<=n; i++)
  pg[i].read_data();
  for(int sem=1; sem<=4; sem++) //pg sem check-------
  {
    float sum=0;
    int found=0, count=0;
    for(i=1; i<=n; i++)
    {
      if(pg[i].sem==sem)
      {
        sum=sum+pg[i].age;
        found=1;
        count++;
      }
    }
    if(found==1)
    {
      average=sum/count;
      cout<<"\nAverage of age of sem "<<sem<<" is :"<<average;
    }
  }
  getch();
}