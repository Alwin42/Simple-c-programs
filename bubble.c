#include<stdio.h>
int main()
{
	int n,temp=0,i,j;
	printf("Enter the size of the array \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d ",&arr[i]);
	}
	
	printf("Array before sorting : \t");
	for(i=0;i<=n-1;i++)
	{
	 printf("%d \t ",arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}
			}
		}
    printf("\n Array after sorting \t");
    for(i=0;i<n;i++)
	{
	 printf("%d ",arr[i]);
	}
}
