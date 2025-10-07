#include<stdio.h>
int main()
{
	int Basic_Salary,House_Rent_Allowance,Other_Allowances,Bonus,Other_Earnings,Gross_Salary;
    printf("Enter your basic salary in INR ");
    scanf("%d",&Basic_Salary);
    printf("Enter your House rent allowance in INR ");
    scanf("%d",&House_Rent_Allowance);
    printf("Enter Other allowances provided to you in INR ");
    scanf("%d",&Other_Allowances);
    printf("Enter the bonus received in INR ");
    scanf("%d",&Bonus);
    printf("Enter any other earnings in INR ");
    scanf("%d",&Other_Earnings);
    Gross_Salary = Basic_Salary + House_Rent_Allowance + Other_Allowances + Bonus + Other_Earnings;
    printf("Gross Salary = %d INR",Gross_Salary);
    
    return 0;
    
}
