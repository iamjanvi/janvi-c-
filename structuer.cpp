//structure 
#include<iostream>
using namespace std;
struct person{
	char name[50];
	 int age ;
	 float salary;
	
};
int main()
{
	person p1;
	cout << " enter the name " ;
	cin .get (p1.name,50) ;
	cout << " enter the age" ;
	cin >> p1.age ;
	cout << " enter the salary " ;
	cin >> p1.salary ;
	cout << " displaying the information..." << endl;
	cout << " name: " << p1.name<<endl;
		cout << "age: " <<p1.age << endl;
		cout << "salary: " << p1.salary << endl;
		return 0;
}
