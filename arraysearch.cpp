//searching a element a array..
#include<stdio.h>
#include<conio.h>
int main()
{
  int n,a[10],i,key,flag=0;
  printf("\nEnter the size of array: ");
  scanf("%d",&n);
  printf("\nEnter the elements of array..");
  for(i=0;i<=n;i++)
  scanf("%d",&a[i]);
  
  printf("Enter the key element for searching:");
  scanf("%d",&key);
 for(i=0;i<=n;i++)
  {
    
  	if(key==a[i])
  	 {
  		flag=1;
  		break;
     }
  }
	    
    if(flag==1)
     {
     	printf("\nThe element is exist..");
	 }
else
     {
		printf("\nThe Element is not exist");
     }
	  return 0;
}`
