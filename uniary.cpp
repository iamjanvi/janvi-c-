#include<iostream>
using namespace std;
 class number
 {
 int a,b;
 public: 
 void  get()
 {
 cout<<"enter two number";
 cin>>a>>b;
 }
 void show()
 {
 cout"a ="<<a;
 cout"b ="<<b;
 }
 void  operator -()
 {
 a=-a;
 b-b;
 }
 
 };
 
int main()
{
    number n1;
    n1.get();
    n1.show();
    -n1;
    n1.show();
    return 0;
}
