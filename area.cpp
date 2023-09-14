// area of circle by deafult argument 
#include<iostream>
using namespace std;
double area(double x=0)
{
	return(3.14*x*x);
}
int main()
{
	double radius;

	cout<<"The area of circle is: "<<area(5)<<endl;
	return 0;
}
