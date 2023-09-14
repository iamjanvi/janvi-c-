// function overloading
#include<iostream>
using namespace std ;
void add(int a, int b)
{
	cout << "sum = " <<(a+b);
}
void add(double a,double b,double c)
{
 cout << endl<<"sum = "  << (a+b+c);	
}
int main()
{
	add (10,5);
	add(10.5,3.5,2.4);
	return 0;
}
