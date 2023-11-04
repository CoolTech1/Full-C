#include<stdio.h>
int main()
{
	int num;
	printf("Enter number :");
	scanf("%d",&num);
	
	if(num>=0)
	{
		if(num%2==0)
		{
	    	printf("%d is positive even number \n",num);
        }
	    else 
    	{
	    	printf("%d is odd number \n",num);
     	}
    }
	else
	{
		printf("%d is negative number \n",num);
	}  
	return 0;
}
