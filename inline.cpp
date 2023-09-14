// inline function 
#include<iostream>
using namespace std;
inline int max(int a, int b)
{
	return(a>b)?a:b;
}
int main()
{
	cout << " max (10,15) = " << max(10,15)<<endl;
	cout << endl << " max  (89,99)= " <<max(89,99);
	cout << endl << "max (56,44) = " << max(56,44);
	 return 0;
}
