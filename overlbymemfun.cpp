//overloading binary operator using member function....
#include<iostream>
using namespace std;
class Distance
{
	int meter,cm;
	public:
          
		  void get_distance()
		  {
		    cout<<"enter the meter and cm : ";
			cin>>meter>>cm; 	
		  }		
		  void put_distance()
		  {
		  	cout<<"\nMbeter = "<<meter<<"\t cm = "<<cm;
		  }
		  Distance operator +(Distance t)
		  {
		  	Distance r;
		  	r.meter=meter+t.meter;
		  	r.cm=cm+t.cm;
		  	if(r.cm>100)
		  	{
		  		r.cm=r.cm-100;
		  		r.meter=r.meter+1;
			  }
			  return r;
		  }
		  Distance operator -(Distance t)
		  {
		  	Distance r;
		  	r.meter=meter-t.meter;
		  	r.cm=cm-t.cm;
		  	if(r.cm<0)
		  	{
		  		r.cm=r.cm+100;
		  		r.meter=r.meter-1;
		  		
			  }
			  return r;
		  }
};

int main()
{
	Distance d1,d2,d3;
	d1.get_distance();
	d2.get_distance();
	d3=d1+d2;
	d3.put_distance();
	d3=d1-d2;
	d3.put_distance();
	return 0;
}













