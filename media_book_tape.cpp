#include<iostream>
using namespace std;
class media
{
 public:
 virtual void print()
 {
 
 }
 virtual void show()
 {
 
 }
};
class book : public media
{
protected:
 int page;
 float price ;
 public:
  void print()
  {
  cout<<"enter the price of the book : ";
  cin>>price;
  cout<<"enter th total page of the book : ";
  cin>>page;
  }
  void show()
  {
  cout<<"price of the book is = "<<price<<endl;
  cout<<"total page  of  book is = "<<page<<endl;
  }
};

class tape : public media
{
protected:
 float time ,p1 ;
 public:
  void print()
  {
  cout<<"enter the time of song : ";
  cin>>time;
  cout<<"enter the price of tape : ";
  cin>>p1;
  }
  void show()
  {
  cout<<"timing of song "<<time<<" minutes "<<endl;
  cout<<"price of the tape is =  "<<p1<<endl;
  }
};

int main()
{
   media m,*mptr;
   book b;
   tape t;
   mptr=&m;
   mptr->show();
   mptr=&b;
   mptr->print();
   mptr->show();
   mptr=&t;
   mptr->print();
   mptr->show();
   
    return 0;
}