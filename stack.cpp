//stack..
#include<stdio.h>
#define SIZE 4
int top = -1,arr[SIZE];
void push();
void pop();
void show();
int main()
{
	int choice;
	while(1)
	{
	
	printf("\nperform operation on the stack..");
	printf("\n1.push the element\n2.pop the element\n3.show\n4.End");
	printf("\nEnter the choice..");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:push();
		       break;
		case 2:pop();
		       break;
		case 3:show();
		       break;
		case 4:
		       break;
	    default : printf("\nInvalid choice..");
	}
    }
    
}
void push()
{
	int x;
	if(top == SIZE-1)
	{
		printf("\nThe overflow!!");
	}
	else
	{
		printf("\nEnter the element to be added on to stack..");
		scanf("%d",&x);
		top=top+1;
		arr[top]=x;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nunderflow...");
	}
	else
	{
		printf("\npopped element:%d",arr[top]);
		top=top-1;
	}
}
void show()
{
	if(top==-1)
	{
		printf("\nunderflow!!");
	}
	else
	{
		printf("\nElements present in the stack:\n");
		for(int i=top;i>=0;--i)
	 printf("%d\n",arr[i]);
	}
}


