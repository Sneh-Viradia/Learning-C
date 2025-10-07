#include<stdio.h>
int main()
{
    int a,max=-999999,min=999999,num,n,maxq=-999999;
    printf("Enter the number of numbers that need to be compared. ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&num);
        if(num>max)
        {
            a=max;
            max=num;
        }
        if(num>maxq && num<max)
        {
            maxq=num;
            a=maxq;
        }
    }
    printf("The largest number among the entered numbers is %d.\n",max);
    printf("The second largest number among the entered numbers is %d.",a);
    return 0;

}