#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter variable a ");
	scanf("%d",&a);
	printf("Enter variable b ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("Variable a=%d",a);
	printf("\n");
	printf("Variable b=%d",b);
	
	return 0;
	
}
