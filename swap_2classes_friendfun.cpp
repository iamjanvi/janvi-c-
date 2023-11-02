#include <iostream>
using namespace std;

class b;
class a
{
	int x;
	public:
	a(int c)
	{
		x=c;
	}
    void show()
    {
    cout<<"a ="<<x;
    }
	friend void swap(a,b);
};
class b
{
	int y;
	public:
	b(int d)
	{
		y=d;
	}
        void show()
    {
    cout<<"\tb="<<y<<endl;
    }
	friend void swap(a,b);
};
void swap(a e,b f)
{
	int temp;
	temp=e.x;
	e.x=f.y;
	f.y=temp;
	cout<<" a="<<e.x;
	cout<<" b="<<f.y<<endl;
}
int main()
{
     a e(5);
     b f(3);
     cout<<"before swapping : "<<endl;
     e.show();
     f.show();
     cout<<"after swapping : "<<endl; 
	swap(e,f);
	return 0;
}