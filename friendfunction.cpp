#include<iostream>
using namespace std;
class value
{
	int val1, val2, val3;
	public:
		void input()
		{
			cout<<"\nEnter any three values: ";
			cin>>val1>>val2>>val3;
		}
		friend float mean(value ob);
};
float mean(value ob)
{
	return   float(ob.val1+ob.val2+ob.val3)/3;
}

int main()
{
	value ob;
	ob.input();
	cout<<"\nAverage of entered three number is  "<<mean(ob);
	return 0;
}
