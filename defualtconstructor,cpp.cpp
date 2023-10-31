// default constructor....
#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		A()
		{
			x=10;
		}
};
int main()
{
	A obj;
	cout<<"The value of x: "<<obj.x<<endl;
	return 0;
}
