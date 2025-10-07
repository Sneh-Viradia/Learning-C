#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter a number. ");
    scanf("%d",&num);
    while (num>0)
    {
        printf("Enter a number. ");
        scanf("%d",&num);
        sum=sum+num;
        
    }
    printf("Sum is %d",sum);
}