#include<iostream.h>
#include<conio.h>
class A() {
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
class B() {
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
void main() {
    A objA;
    B objB;
    clrscr();
    objB.getB();
    objA=objB;
    objA.showA();
    getch();
}