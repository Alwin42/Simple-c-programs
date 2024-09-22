#include<stdio.h>
#include<string.h>
int main()
{
	int i,lim=0,vow=0,con=0;
	char str[50];
	printf("Enter the string : \t");
	scanf("%s",&str);
	printf("\n Entered String is %s ",str);
	lim=strlen(str);
	for(i=0;i<lim;i++)
	{
	if('A'==str[i]|| 'E'==str[i]||'I'==str[i]||'O'==str[i]||'U'==str[i] ||
	   'a'==str[i] ||'e'==str[i] || 'i'==str[i] || 'o'==str[i] || 'u'==str[i])
	   {
	   vow++;
	   }
	   else if(('A'<str[i] && 'Z'>=str[i]) || ('a'<str[i] && 'z'>=str[i]))
	   {
		   con++;
		   }
		   
	   }
	   printf("\n Vowels and consonants in a string is %d ,%d",vow,con);
   }
