#include<stdio.h>
int main()
{
	int s=0,x=0,i,found=0, p;
	printf("Enter the size of the array \n");
	scanf("%d",&s);
	int arr[s];
	printf("Enter the array elements :\n");
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr[i]);
	}
    printf("Enter the element to search : \t");
    scanf("%d",&x);
    for(i=0;i<s;i++)
    {
		if(x==arr[i])
	    found=1;
	    p=i+1;
	  }
	  if(found==1)
	  {
		  printf("Element %d found at %d position ",x,p);
	  }
	  else
	  printf("Element not found ");
	  return 0;
	  
	  }
