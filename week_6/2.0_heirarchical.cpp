#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;
    char name[10];
public:
    Student()
    {
        cout<<"Enter student details:"<<endl<<"Rollno:";
        cin>>roll;
        cout<<"Name:";
        cin>>name;
    }
};

class Sports : protected virtual Student
{
protected:
    int s_grade;
public:
    Sports()
    {
        cout<<"Enter sports grade:";
        cin>>s_grade;
    }
};

class Exam : protected virtual Student
{
protected:
    int e_grade;
public:
    Exam()
    {
        cout<<"Enter exam grade:";
        cin>>e_grade;
    }
};

class Results : protected Sports, protected Exam
{
    char f_grade;
    int total;
public:
    Results()
    {
        total = s_grade + e_grade;
        grade_calc();
    }
    void grade_calc()
    {
        switch(total)
        {
        case 90 ... 100:
            f_grade = 'O';
            break;
        case 80 ... 89:
            f_grade = 'E';
            break;
        case 70 ... 79:
            f_grade = 'A';
            break;
        case 60 ... 69:
            f_grade = 'B';
            break;
        case 50 ... 59:
            f_grade = 'C';
            break;
        case 40 ... 49:
            f_grade = 'D';
            break;
        default:
            f_grade = 'F';
        }
    }
    void show_Result()
    {
        cout<<"The final grade for "<<name<<" is "<<f_grade<<endl;
    }
};

int main()
{
    Results r1;
    r1.show_Result();
}