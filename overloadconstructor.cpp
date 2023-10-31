//overloaded constructor....
#include<iostream>
using namespace std;
class A
{
	public:
		int width, height;
		A()
		{
			cout<<"defualt constructor called"<<endl;
			width = 0;
			height= 0;
		}
		A(int x)
		{
			cout<<" constructor with one arguments..."<<endl;
			width = x;
			height= x;
		}
		A(int x,int y)
		{
			cout<<" constructor with two arguments..."<<endl;
			width = x;
			height= y;
		}
		void getdata()
		{
			cout<<"width = "<<width<<endl;
			cout<<"height = "<<height<<endl;
		}
};
int main()
{
	A obj1;
	A obj2(5);
	A obj3(3,6);
	
	obj1.getdata();
	obj2.getdata();
	obj3.getdata();
		return 0;
}
