//scope resolution
#include<iostream>
using namespace std;
int a=10;//global declaration
//derive code
int main()
{
	int a=8;
	cout<<"the local variable value of a: "<<a<<endl;
	cout<<"the global variable value of a: "<<::a;
	return 0;
	
}
