#include<stdio.h>
int main()
{
	int marks;
	printf("Enter Marks :");
	scanf("%d",&marks);
	
	if(marks>30)
	{
		printf("You are PASSED");
	}
	else
	{
		printf("You are FAILED");
	}
	return 0;
}
