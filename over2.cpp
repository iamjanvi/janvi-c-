#include<iostream>
using namespace std;
void add(int a, double b)
{
	cout<<"sum = "<<a+b;
}
void add(double a, int b)
{
	cout<<endl<<"sum = "<<a+b;
}
int main()
{
	add(5,6.7);
	add(7.8,9);
	return 0;
}
