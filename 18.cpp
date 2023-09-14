#include<iostream>
using namespace std;
class A
{
	private:
		int a;
 public:
 	void input1()
 	{
 	cout<<"Enter the a:..";
	 cin>>a;
	 	
	 }
  void display1()
  {
  	cout<<"a = "<<a<<endl;
  }
};
class B: public A
{
	int b;
	public:
		
		void input2()
		{
			input1();
			cout<<"Enter the b:..";
	        cin>>b;
		}
		void display2()
		{
			display1();
			cout<<"b = "<<b<<endl;
		}
};
class C: public B
{
	private:
		int c;
		
	public:
		 void input3()
		 {
		 	input2();
		cout<<"Enter the c:..";
	    cin>>c;
		 }
		void display3()
		{ 
		display2();
		cout<<"c = "<<c<<endl;
		}
};
//derived code..
int main()
{
	C obj;
	
	//obj.A::input();
	//obj.B::input();
	//obj.C::input();
	obj.input3();
	obj.display3();
	//obj.A::display();
	//obj.B::display();
	//obj.C::display();
	return 0;
	
}
