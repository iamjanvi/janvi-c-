#include<iostream>
using namespace std;
class A {
    private:
        int a;
    public:
        A() {
            a=0;
        }
        A(int val) {
            a=val;
        }
        void showA() {
            cout<<"\na="<<a;
        }
};
class B {
    private:
        int b;
    public:
        B() {
            b=0;
        }
        operator A() {
            return A(b);
        }
        void getB() {
            cout<<"\nEnter value for b:";
            cin>>b;
        }
        void showB() {
            cout<<"\nb="<<b;
        }
};
int main() {
    A objA;
    B objB;
    objB.getB();
    objA=objB;
    objA.showA();
    return 0;
}