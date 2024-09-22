#include<stdio.h>
int main()
{
    int num,i,rev=0,temp=0;
    printf("Enter the number to check palindrome : ");
    scanf("%d",&num);
    temp=num;

    if(num<9)
    {
        printf("the number is not palindrome");
        return 0;
    }

    while(temp!=0)
    {
        rev=rev*10+temp%10;
        temp=temp/10;
    }

    
    if(rev==num)
    {
        printf("the number is  palindrome %d" , num);
    }
    else
    {
        printf("the number is not palindrome");

    }

}