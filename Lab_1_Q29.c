#include<stdio.h>
int main() {
    int a, num, sum = 0, q;
    printf("Enter a number to check if it is a palindrome or not. ");
    scanf("%d", &num);
    a = num;
    while (num != 0) {
        q = num % 10;
        sum = sum * 10 + q;
        num = num / 10;
    }
    if(a==sum) {
        printf("%d is a palindrome number.", a);
    } 
    else {
        printf("%d is not a palindrome number.", a);
    }
    return 0;

}