// constructor with default arguments....
#include<iostream>
using namespace std;
class A
{
	public:
		int width, height;
		
		A(int x,int y=0)
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
	A obj1(5);
	A obj2(3,6);
	
	obj1.getdata();
	obj2.getdata();
		return 0;
}
