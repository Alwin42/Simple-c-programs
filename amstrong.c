#include<stdio.h>
int main()
{
	int num,temp=0,sum=0;
	printf("Enter the number to check amstrong or not \n ");
	scanf("%d",&num);
	if(num<=0)
	printf("There number is not allowed \n");
	temp=num;
	while(temp>0)
	{
	int digit=temp%10;
	sum=sum+(digit*digit*digit);
	temp=temp/10;
}
if(sum==num)
{
	printf("%d is an amstrong number \n", num);
	}
	else
	{
		printf("the number is not amstrong \n ");
		}
		return 0;
	}
