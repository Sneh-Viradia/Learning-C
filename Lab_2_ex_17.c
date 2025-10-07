#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a ");
    scanf("%d",&a);
    printf("Enter value of b ");
    scanf("%d",&b);
    printf("Enter value of c ");
    scanf("%d",&c);

    if (a>b&&a>c)
        printf("A is the biggest number and that number is %d.",a);
    if (b>c&&b>a)
        printf("B is the biggest number and that number is %d.",b);
    if (c>a&&c>b)
        printf("C is the biggest number and that number is %d.",c);

    return 0;
}