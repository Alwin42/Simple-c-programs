#include<stdio.h>
int main()
{
	char s1[100],s2[100];
	int i,j;
	printf("Enter the first string end with $ \n");
	gets(s1);
	printf("Enter the second string end with $ \n");
	gets(s2);
    for(i=0;s1[i]!='$';i++)
    {
		for(j=0;s2[j]!='$';i++,j++)
		{ 
			s1[i]=s2[j];
		}
		s1[i]='\0';
		
	} 
	printf(" String after concatenate = %s" ,s1);
}
