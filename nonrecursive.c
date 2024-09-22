#include <stdio.h>

int factorial(int n)
{
    int res = 1;
    while (n > 1) 
    {
        res *= n;
        n--;
    }
    return res;
}

int main() 
{
    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    
    if (num < 0) 
    {
        printf("Factorial is not defined for negative numbers! \n");
    } else 
    {
        int fact = factorial(num);
        printf("Factorial of %d is %d\n", num, fact);
    }
    
    return 0;
}
