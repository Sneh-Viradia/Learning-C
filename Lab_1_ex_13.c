#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number ");
	scanf("%d",&number);
	if(number==0)
	{
		printf("The number is zero.");
	}
	else if(number<0)
	{
		printf("The number is negative");
	}
	else if(number%2==0)
	{
		printf("The number is even.");
	}
	else
	{
		printf("The number is odd.");
	}
	return 0;s
}
