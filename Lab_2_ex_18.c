#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter value of a ");
    scanf("%d",&a);
    printf("Enter value of b ");
    scanf("%d",&b);
    printf("Enter value of c ");
    scanf("%d",&c);

    d= a>b?a:b;
    e= b>c?b:c;
    f= d>e?d:e;

    printf("%d is the greatest number",f);

    return 0;
    
}