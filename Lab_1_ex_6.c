#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter variable a ");
	scanf("%d",&a);
	printf("Enter variable b ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Variable a is %d",a);
	printf("\n");
	printf("Variable b is %d",b);
	
	return 0;
	
	
}
