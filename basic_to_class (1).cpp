#include<iostream>
using namespace std;
class Time
{
    private:
        int hh,mm;
    public:
        Time() {
            hh = mm = 0;
        }
        Time(int t) {
            hh = t/60;
            mm = t%60;
        }
        void getTime() {
            cout<<"\nEnter hours and minutes:";
            cin>>hh>>mm;
        }
        void showTime() {
            cout<<endl<<"Hours :"<<hh<<"\tMinutes :"<<mm;
        }
};
int  main() {
    Time T1;
    int totmin;
    cout<<"\nEnter total minutes :";
    cin>>totmin;
    T1 = totmin;
    T1.showTime();
    return 0; 
}