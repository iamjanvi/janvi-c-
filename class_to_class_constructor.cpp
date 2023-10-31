#include<iostream.h>
#include<conio.h>
class B {
    private:
        int b;
    public:
        B() {
            b = 0;
        }
        void getB() {
            cout<<"\nEnter value for B:";
            cin>>b;
        }
        void showB() {
            cout<<"\nB:"<<b;
        }
        int takeb(){
            return b;
        }
};
class A() {
    private : 
        int a;
    public:
        A() {
            a=0;
        }
        A(B obj){
            a = obj.takeb();
        }
        void showA() {
            cout<<"\nA:"<<a;
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