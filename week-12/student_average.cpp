#include<iostream>
using namespace std;
void marks(){
    float a,b,c,d,e,avg;
    cout<<"Enter marks \n"; cin>>a>>b>>c>>d>>e;
    avg=(a+b+c+d+e)/5;
    if(a>100 || b>100|| c>100|| d>100|| e>100|| avg>100 || avg<0 || a<0 || b<0 || c<0 || d<0 || e<0){
        throw "Exception caught";
    }
    cout<<"Student avg is "<<avg<<endl;
}
int main(){
    try{
        marks();
       }
       catch(const char* msg){
    cerr<<msg<<endl;
       }
return 0;
}