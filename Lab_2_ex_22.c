#include<stdio.h>
int main()
{
    long i,j,k,final;
    k=1;
    printf("Enter the number whose factorial has to be found ");
    scanf("%ld",&i);
    final=i;
    while(i>1)
    {
            j=i*k;
            k=j;
            i=i-1;

    }
    printf("The factorial of %ld is %ld. ",final,j);

    return 0;
}