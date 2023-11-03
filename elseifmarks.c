#include<stdio.h>
int main()
{
	int marks;
	printf("Enter Marks :");
	scanf("%d",&marks);
	
	if(marks<=30 && marks>=0)
	{
		printf("You are FAILED \n");
	}
	else if(marks>30 && marks<=100)
	{
		printf("You are PASSED \n");
	}
	else
	{
	printf("You entered wrong marks");
    }
    return 0;
}
