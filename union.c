#include<stdio.h>
#include<string.h>
#define C_size 50
union psn
{
	char n[C_size];
	char hn[C_size];
	char cn[C_size];
	char s[C_size];
	char pc[C_size];
	};
int main()
{
	union psn person;
	printf("Address Details \n ");
	
	printf("Enter the Name of the person : \n ");
	gets(person.n);
	printf("Name: %s \n \n ", person.n );
	
	printf("Enter the House Name : \n");
	gets(person.hn);
	printf("House Name : %s \n \n",person.hn );
	
	printf("Enter the City name : \n");
	gets(person.cn);
	printf("City name  : %s \n \n",person.cn );
	
	printf("Enter the State : \n");
	gets(person.s);
	printf(" State : %s \n \n", person.s );
	
	printf("Enter the pincode\n");
	gets(person.pc);
	printf("pincode; %s \n \n", person.pc);
}
