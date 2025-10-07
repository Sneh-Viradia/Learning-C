//Simple Interest Calculation
//Sneh Viradia A53 DoAI


#include <stdio.h>
int main()
{
    int principal,rate,time,interest;
    printf("Enter principal in rupees ");
    scanf("%d",&principal);
    printf("\n");
    printf("Enter rate in percent yearly ");
    scanf("%d",&rate);
    printf("\n");
    printf("Enter time in years ");
    scanf("%d",&time);
    printf("\n");
    interest=(principal*rate*time)/100;
    printf("Simple Interest = %d Rupees",interest);   

    return 0;
}
