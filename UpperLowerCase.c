#include<stdio.h>
int main()
{
	char ch;
	printf("Enter Character :");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("Letter is in Upper Case");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("Letter is in Lower Case");
	}
	else
	{
		printf("Invalid Character");
	}
	return 0;
}
