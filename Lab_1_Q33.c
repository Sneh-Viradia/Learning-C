#include<stdio.h>
int main() {
    int n,num,max=-999999,min=999999;
    printf("Enter the number of numbers that need to be compared. ");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        printf("Enter number %d: ",i+1);
        scanf("%d",&num);
        if(num>max) {
            max=num;

        }
        if(num<min) {
            min=num;
        }

    }
    printf("The largest number among the entered numbers is %d.\n",max);
    printf("The smallest number among the entered numbers is %d.",min);
    return 0;

}