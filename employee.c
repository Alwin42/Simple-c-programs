#include<stdio.h>

struct employee
{
	int id,sal;
	char name[50];
    
	};
 int main()
 {
	struct employee em;
	printf("Employee Details \n");
	printf("Enter the Employee id :");
	scanf("%d",&em.id);
	
	printf("Enter the employee name : \n");
	scanf("%s",&em.name);
	
	printf("Enter the employee salary : \n");
	scanf("%d",&em.sal);
	
	printf("Details Entered \n");
	printf("Employee id : %d \n",em.id);
	printf("Employee name : %s\n",em.name);
	printf("Employee salary : %d \n",em.sal);
	 
	 }
