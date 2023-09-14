 //structure in c++
 #include<iostream>
 using namespace std;
 struct student
 {
 	char name[50];
 	int age;
 	float salary;
 };
 //derive code
int main()
{
	student s1;
	cout<<"Enter the name: ";
	cin.get(s1.name,50);
	cout<<"Enter the age: ";
	cin>>s1.age;
	cout<<"Enter the salary: ";
	cin>>s1.salary;
	cout<<"Displaying the student information.. "<<endl;
	cout<<"Name: "<<s1.name<<endl;
		cout<<"Age: "<<s1.age<<endl;
			cout<<"Salary: "<<s1.salary<<endl;
	return 0;
}
