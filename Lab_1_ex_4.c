#include<stdio.h>
int main()
{
    float Celsius,Fahrenheit;
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &Fahrenheit);
    Celsius = (Fahrenheit - 32) * 5.0 / 9.0;
    printf("Temperature in Celsius = %.2f\n", Celsius);

    
    return 0;
}