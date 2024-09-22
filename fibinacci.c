#include<stdio.h>
int main()
{
	int first=0,term,i,second=1,next;
	printf("Enter the number : \t");
	scanf("%d",&term);
	printf("0\t1\t");
	for(i=1;i<term-1;i++)
	{
		next=first+second;
		printf("%d \t",next);
		first=second;
		second=next;
	
	
	}
}
