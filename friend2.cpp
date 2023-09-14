#include<iostream>
using namespace std;
class test
{
	private:
		int x,y;
		public:
			void input()
			{
				cout<<"Enter two number: ";
				cin>>x>>y;
			}
			friend void find(test t);
};
void find (test t)
{
	if(t.x>t.y)
	{
		cout<<"largest is: "<<t.x;
	}
	else
	{
		cout<<"smallest is: "<<t.y;
	}
}
int main()
{
	test t;
	t.input();
	find(t);
	return 0;
}
