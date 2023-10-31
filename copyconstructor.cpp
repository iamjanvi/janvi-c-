//overloaded constructor....
#include<iostream>
using namespace std;
class Box
{
	public:
		int width;
		Box()
		{
			
			width = 0;
			
		}
		Box(Box &b)
		{
			width=b.width+5;
		}
		void setwidth(int x)
		{
			width=x;
		}
		void getwidth()
		{
			cout<<"width = "<<width<<endl;
		     
		}
};
int main()
{
	Box mybox;
	mybox.setwidth(10);
	Box newBox =mybox;
	newBox.getwidth();
		return 0;
}
