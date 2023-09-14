//display array to 5 element..
#include<stdio.h>

int main()
{
int a[10],i,element;
	printf("Enyter 5 element...");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	printf("\nThe new array is ..");
	for(i=0;i<5;i++)
	printf(" %d",a[i]);
	return 0;
}
