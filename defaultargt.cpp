// default argument
#include<iostream>
using namespace std;
int sum(int a, int b, int c=0,int x=0)
{
	return(a+b+c+x);
}
int main()
{
	cout << " sum  (10,15) = " << sum(10,15)<<endl;
	cout << endl << " sum  (2,3,6)= " <<sum(2,3,6);
	cout << endl << "sum (5,6,7,8) = " << sum(5,6,7,8);
	 return 0;
}
