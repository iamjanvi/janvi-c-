 // print hello and add using switch and use defined..
#include<stdio.h>
void display();
void add();
int main()
{
	int n;
	printf("\nEnter the choice ..");
	scanf("%d",&n);
	switch(n)
	{
	
	case 1: display();
	         break;
    case 2: add();
             break;
    default : printf("\nInvalid the choice...");
    }
    return 0;
}
void display()
{
	printf(   "\Hello");
}
void add()
{
	int n1,n2,sum;
	printf("\nEnter the 1st no..");
	scanf("%d",&n1);
	printf("\nEnter the 2nd no..");
	scanf("%d",&n2);
	sum=n1+n2;
	printf("\nsum = %d",sum);
	
}
