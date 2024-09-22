#include<stdio.h>
int main()
 {
    int num,i,temp=0;
    printf("Enter the number to check it's Prime or not \n");
    scanf("%d" ,&num);
    
    if(num<1)
    {
        printf("The number is not Prime ");
        return 0;
    }
     for(i=2;i<=num;i++)
     {
        if(num%i==0)
        {
            temp=1;
            break;
        }

     }
     if(temp==0)
     {
        printf(" %d The number is Prime " , num);
     }
     else
     {
        printf("The number is not Prime ");
     }

 }