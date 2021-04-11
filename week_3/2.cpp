#include <iostream>
using namespace std;
int fetchdata(int x){
    cout<<"It is an integer data"<<x<<endl;
}
char fetchdata(char x){
    cout<<"It is a character data"<<x<<endl;
}
char fetchdata(float x){
    cout<<"It is a floating point data"<<x<<endl;
}
int main()
{
    fetchdata(6);
    fetchdata('X');
    fetchdata(8.6f);
    return 0;
}