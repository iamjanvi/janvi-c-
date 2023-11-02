#include<iostream>
using namespace std;
 class mul
 {
 int a,b;
 public: 
 mul()
 {}
 mul(int x, int y)
 {
 a=x;
 b=y;
 }
 void show()
 {
 cout<<a<<b<<endl;
 }
 friend mul operator +(mul);
 };
 mul mul ::operator +(mul t)
 {
 mul m;
 m.a=a+t.a;
 m.b=b+t.b;
 return m;
 }
int main()
{
    mul m1(4,5),m2(5,3),m3;
    m3=m1+m2;
    m1.show();
    m2.show();
    m3.show();
    return 0;
}