#include <iostream>
#include <fstream>
using namespace std;

class student
{
   int roll;
   char name[30];
   float marks;
   public:
   student() { }
   void getData(); 
   void displayData();
   };

void student :: getData() 
{
   cout << "\nEnter Roll No. :: ";
   cin >> roll;
   cin.ignore();
   cout << "\nEnter Name :: ";
   cin.getline(name, 30);
   cout << "\nEnter Total Marks :: ";
   cin >> marks;
}

void student :: displayData() 
{
   cout << "\nRoll No. :: " << roll << endl;
   cout << "\nName :: " << name << endl;
   cout << "\nMarks :: " << marks << endl;
}

int main()
{
   student s;
   fstream file;

   file.open("R:\\Online sem 4\\OOP_lab\\week_11\\student.txt", ios :: out); 
    cout << "\nWriting Student information to the file :- " << endl;
    cout << "\nEnter student Details to the File :- " << endl;
      s.getData();
      file.write((char *)&s, sizeof(s));
    
    file.close();

   file.open("R:\\Online sem 4\\OOP_lab\\week_11\\student.txt", ios :: in);
   cout << "\nReading Student information from the file :- " << endl;

      file.read((char *)&s, sizeof(s));
      s.displayData();

   file.close();

   return 0;

}