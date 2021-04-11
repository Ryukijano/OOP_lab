#include <iostream>

using namespace std;


class time {

    private :
          double hour;
          double minutes;
          double seconds;

     public:
          void inTime(void);
          void printTime(void);
          void addTime(time time1,time time2);      
};

int main()
{
   time time1, time2 time3;
   time1.inTime();
   time2.printTime();
   time3.addTime(time1,time2);
   time3.printTime();
   return 0;
}

void Time::inTime(void)
{
    cout<<"Enter the time :"<<endl;
    cout<<"Hours"; cin>>hours;
    cout<<"Minutes"; cin>>minutes;
    cout<<"Seconds"; cin>>seconds;
}

void Time::printTime(void)
{
    cout << endl;
    cout << "Time after addition :";
    cout << hour << ":" << minutes << ":" << seconds << endl;
}

void Time::addTime(time time1,time time2)
{
    this->seconds=time1.seconds + time2.seconds;
    this->minutes=time1.minutes + time2.minutes + this->seconds/60;
    this->hours = time1.hours + time2.hours + (this->minutes/60);
    this->minutes %=60;
    this->seconds %=60;
}
