#include<iostream.h>
#include<conio.h>
class Distance() {
    private:
        int meter,cm;
    public:
        Distance() {
            meter=0;
            cm=0;
        }
        Distance(int val) {
            meter = val/100;
            cm = val%100;
        }
        operator int() {
            int val;
            val = meter*100+cm;
            return val;
        }
        void getDistance() {
            cout<<"\nEnter meter and cm:";
            cin>>meter>>cm;
        }
        void showDistance() {
            cout<<"\nMeter : "<<meter<<"\tCm : "<<cm;
        }
};
void main() {
    Distance D1;
    clrscr();
    D1.getDistance();
    int totalcm;
    totalcm = int(D1);
    cout<<"\nTotal cm:"<<totalcm;
    getch();
}