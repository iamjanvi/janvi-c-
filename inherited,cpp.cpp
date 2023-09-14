#include<iostream>
using namespace std;
class A
{
 public:
  void display()
  {
  	cout<<"Displaying from A..";
  }
};
class B: public A
{
	public:
		display();
		void display()
		{
			cout<<"Displaying from B..";
		}
};
class C: public B, public A
{
	public:
		display();
		display();
		void display()
		{ 
		cout<<"Displaying from C..";
		}
};
//derived code..
void main()
{
	C obj;
	obj.A::display1();
	obj.B::display();
	obj.C::display();
	return 0;
	
}
