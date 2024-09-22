#include<stdio.h>
#include<string.h>
struct person
{
	int age;
	float height;
	char name[50];
	};
	
int main()
{
	struct person psn;
	
	printf("Enter the Name of the person : \n");
	gets(psn.name);
	printf("Enter the age of the person \n");
	scanf("%d",&psn.age);
	printf("Enter the height of the person \n");
	scanf("%f",&psn.height);
	
	printf("Person Details \n");
	printf("Name : %s \n",psn.name);
	printf("Age : %d \n",psn.age);
	printf("Height : %f \n",psn.height);
	}
