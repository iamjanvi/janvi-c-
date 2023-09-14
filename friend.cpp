// friend function
#include<iostream>
using namespace std;
class Distance
{
private:
	int a;
	friend int addFive(Distance );
	 public:
	 	Distance() : a(0)
{}
};
int addFive(Distance d)
{
d.a += 5;
return d.a;	
}
int main()
{
Distance D;
cout<<"Distance: "<<addFive(D);
	return 0;
}
