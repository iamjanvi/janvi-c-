#include<iostream>
using namespace std;

class A
{
int no, marks;
float per;
public:
void get_data()
{
cout<<"enter the no: ";
cin>>no;
cout<<"enter the marks : ";
cin>>marks;
cout<<"enter the percentage :";
cin>>per;
}

void put_data()
{
cout<<"No is "<<no<<endl;
cout<<"Marks is "<<marks<<endl;
cout<<"Percentage is "<<per<<endl;
}
};
int main()
{
    A obj;
    obj.get_data();
    obj.put_data();
    return 0;
}