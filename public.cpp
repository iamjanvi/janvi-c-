// public private
#include<iostream>
using namespace std;
struct person{
	private:
		char name[50];
	 int age ;
	 float salary;
	 public:
	 	person input()
	{
		 	 
	cout << " enter the name " ;
	cin .get (name,50) ;
	cout << " enter the age" ;
	cin >> age ;
	cout << " enter the salary " ;
	cin >> salary ;
}
void display()
{
		cout << " displaying the information..." << endl;
	cout << " name: " << name<<endl;
		cout << "age: " <<age << endl;
		cout << "salary: " << salary << endl;
}
};
int main()
{
	person p1;
	p1.input();
	p1.display();
	return 0;
}
