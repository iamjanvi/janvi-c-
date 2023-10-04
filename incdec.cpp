#include<iostream>
using namespace std;

class incdec
{
int a;
public : 
incdec(int x)
{
a=x;
}
void show()
{
cout<<"A= "<<a<<endl;
}
void operator ++()
{
++a;
}
void operator ++(int x)
{
a++;
}
void operator --()
{
--a;
}
void operator --(int x)
{
a--;
}
};

int main()
{
    incdec t(5);
    cout<<"show the data"<<endl;
    
    t.show();
    ++t;
    cout<<"after prefix increment" <<endl;
    t.show();
    t++;
    cout<<"after postfix increment" <<endl;
    t.show();
    --t;
    cout<<"after prefix decrement" <<endl;
    t.show();
    t--;
    cout<<"after postfix decrement" <<endl;
    t.show();
    return 0;
}