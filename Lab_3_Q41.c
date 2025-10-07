#include<stdio.h>
int main()
{
    int i=1,num;
    printf("Enter a number for which the factor has to be found. ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
            printf("%d ",i);
    }
}