//scope resolution ..
#include<iostream>
using namespace std;
int a=12;
int main()
{
	int a=10;
	cout<<"the Local variable value a is : "<<a<<endl;
	cout<<"the global variable value a is : "<<::a<<endl;
	return 0;
}
