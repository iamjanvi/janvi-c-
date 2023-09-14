#include<iostream>
//#include<conio.h>
class box
{
	int width;
	public:
		void setData(int w)
		{
		   width=w;
		}
		void getData()
		{
			cout<<"Width: "<<width;
		}
};
int main()
{
	box a;
	cout<<"Box program "<<endl;
	a.setData(20);
    a.getData();
  return 0;
	
}
