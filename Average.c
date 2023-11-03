#include<stdio.h>
int main()
{
	int a,b,c,avg;
	printf("Enter numbers");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	avg=(a+b+c)/3;
	printf("The average is %d",avg);
	return 0;
}
