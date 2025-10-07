#include<stdio.h>
int main()
{
    float Height,Base,Area;
    printf("Enter the length of the Base of the traingle (in cm) ");
    scanf("%f",&Base);
    printf("\n");
    printf("Enter the length of the Height of the triangle (in cm) ");
    scanf("%f",&Height);
    printf("\n");
    Area=(Base*Height)/2;
    printf("Area of triangle = %f squared cm",Area);

    return 0;
}