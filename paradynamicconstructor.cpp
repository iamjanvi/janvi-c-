// parameterized dynamic constructor....
#include<iostream>
#include<string.h>
using namespace std;
class A
{
	public:
		char *surname;
		A(char *p)
		{
			int len=strlen(p);
			surname=new char [len+1];
			strcpy(surname,p);
		}
};
int main()
{
	A obj("Tripathi");
	cout<<"surname: "<<obj.surname<<endl;
	return 0;
}
