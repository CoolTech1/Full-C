#include<stdio.h>
int main()
{
	int age;
	printf("Enter age :");
	scanf("%d",&age);
	age>=18? printf("adult \n") : printf("not adult \n");
	
	/*Ternary Operator Syntax
	condtion?do something if TRUE : do something if FALSE;*/
	
	return 0;
}
