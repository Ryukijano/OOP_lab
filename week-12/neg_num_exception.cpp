#include<iostream>
#include<exception>
using namespace std;
int n;
struct negnumexception:public exception
{
	const char* what() const throw()
	{
		if(n<0)
		return "Negative Numbers not allowed";
	}
};
int main()
{
	cin>>n;
	try
	{
		throw negnumexception();
	}
	catch(negnumexception& e)
	{
		std::cout<<"NegException caught"<<std::endl;
		std::cout<<e.what()<<std::endl;
	}
	return 0;
}