// multiple...
#include<iostream>
using namespace std;
class A
{
	private:
		int a=3;
	public:
		dis_a()
		{
			cout<<" a = "<<a<<endl;
		}
};
class B
{
	private:
		int b=5;
	public:
		dis_b()
		{
			cout<<" b = "<<b<<endl;
		}
};
class C:public A,public B
{
	private:
		int c=7;
	public:
		dis_c()
		{
           
          
			cout<<" c = "<<c<<endl;
		}
};

int main()
{
	C obj;
  obj.dis_a(); 
  obj.dis_b();
	obj.dis_c();
	return 0;
}
