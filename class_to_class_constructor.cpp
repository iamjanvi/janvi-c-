#include<iostream>
using namespace std;
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
class A {
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
int main() {
    A objA;
    B objB;
    objB.getB();
    objA=objB;
    objA.showA();
    return 0;
}