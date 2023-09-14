#include<iostream>
using namespace std;
void add(int a,int b)
{
	cout<<"sum = "<<a+b;
}
void add(double a,double b)
{
	cout<<endl<<"sum = "<<a+b;
}
 int main()
 {
 	add(3,5);
 	add(1.4,5.6);
 	return 0;
 }
