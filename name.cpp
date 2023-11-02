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
  
                   friend Distance operator +(Distance,Distance); 
  
 }; 
  
                   Distance operator +(Distance op1,Distance op2) 
                   { 
                           Distance r; 
                           r.meter=op1.meter+op2.meter; 
                           r.cm=op1.cm+op2.cm; 
                           if(r.cm>100) 
                           { 
                                   r.cm=r.cm-100; 
                                   r.meter=r.meter+1; 
                           } 
                           return r; 
                   } 
                   
 int main() 
 { 
         Distance d1,d2,d3; 
         d1.get_distance(); 
         d2.get_distance(); 
         d3=d1+d2; 
         cout<<"\nResult of addition is \n"; 
         d3.put_distance(); 

         return 0; 
 } 
 