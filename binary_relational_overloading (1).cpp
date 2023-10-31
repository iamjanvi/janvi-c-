//overloading binary relational operators using member function and friend function...
#include<iostream>
using namespace std;
class Distance {
    private :
        int meter, cm;
    public : 
        void getDistance() {
            cout<<"\nEnter meter and cm:";
            cin>>meter>>cm;
        }
        void showDistance() {
            cout<<"\nMeter:"<<meter<<"\tCm :"<<cm;
        }
        int operator > (Distance t)
        {
            int r,totcm1=0,totcm2=0;
            totcm1 = meter * 100+cm;
            totcm2 = t.meter*100+t.cm;
            if(totcm1 > totcm2) 
                return 1;
            else
                return 0;
        }
        friend int operator < (Distance,Distance);
};
int operator < (Distance op1,Distance op2) {
    int r,totcm1=0,totcm2=0;
    totcm1 = op1.meter*100 + op1.cm;
    totcm2 = op2.meter*100 + op2.cm;
    if(totcm1 < totcm2) 
        return 1;
    else 
        return 0;
}
int main() {
    Distance D1,D2;
    clrscr();
    D1.getDistance();
    D2.getDistance();
    if(D1 > D2) 
        cout<<"\nD1 is big...";
    else 
        cout<<"\nD2 is big...";

    if(D1 < D2) 
        cout<<"\nD1 is small...";
    else 
        cout<<"\nD2 is small...";

   return 0;
}
