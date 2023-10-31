// parameterized constructor....
#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		A(int a)
		{
			x=a;
		}
};
int main()
{
	A obj(20);
	cout<<"The value of x: "<<obj.x<<endl;
	return 0;
}
