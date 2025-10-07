#include<stdio.h>
int main(){

    int n1,n2,newt;
    n1=0;
    n2=1;
    printf("Fibonacci series is as follows.\n");
    printf("%d\n",n1);
    printf("%d\n",n2);
    while(n1<=100)
    {
        newt=n1+n2;
        n1=n2;
        n2=newt;
        printf("%d\n",newt);

    }

    return 0;

}