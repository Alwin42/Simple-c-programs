#include<stdio.h>
#include<windows.h>
int main()
{
    int h=0,m=0,s=0;
    int d=1000;
    printf("Enter the time in hour : minute : second \n");
    scanf("%d %d %d",&h,&m,&s);
    if(h>12||m>60||s>60){
        printf("Error !");
        exit(0);
    }
    while(1)
    {
        s++;
        if(s>59)
        {
            s=0;
            m++;
        }
        if(m>59)
        {
            m=0;
            h++;
        }
        if(h>12)
        {
            h=1;
        }
        printf("\t \t Clock \n");
        printf("\n %02d : %02d : %02d",h,m,s);
        Sleep(d);
        system("cls");
    }
}