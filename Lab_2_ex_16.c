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
    if (a>b)
    {
        if (a>c)
            printf("A is the greatest number and that is %d",a);

        else
        {
            printf("C is the greatest number and that is %d",c);
        }

    }
    else
    {
        if (b>c)
        {
            printf("B is the greatest number and that is %d",b);
        }
        else
        {
            printf("C is the greatest number and that is %d",c);
        }
    }

    return 0;
}