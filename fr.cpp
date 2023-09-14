// friend function..
#include<iostream>
using namespace std;
class test
{
	private: 
	int x,y;
	public:
		void input()
		{
			cout<<"E#nter the Two number:: ";
			cin>>x>>y;
		}
		friend void display(test t);
		
};
void display(test t)
{
	if(t.x>t.y)
	{
		cout<<"Largest is : "<<t.x;
	}
	else
	{
		cout<<"Largest is : "<<t.y;
	}
}
int main()
{
	test t;
	t.input();
	display(t);
	return 0;
}
