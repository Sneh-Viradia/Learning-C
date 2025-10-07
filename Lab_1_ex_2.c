#include<stdio.h>
int main()
{
    int Maths,Chemistry,Physics,English,PE,Total;
    float Percentage;
    printf("Enter marks of Maths ");
    scanf("%d",&Maths);
    printf("\n");  
    printf("Enter marks of Chemistry ");
    scanf("%d",&Chemistry);
    printf("\n");
    printf("Enter marks of Physics ");   
    scanf("%d",&Physics);
    printf("\n");
    printf("Enter marks of English ");
    scanf("%d",&English);
    printf("\n");
    printf("Enter marks of PE ");
    scanf("%d",&PE);
    printf("\n");
    Total=Maths+Chemistry+Physics+English+PE;   
    Percentage=(Total/5);
    printf("Total Marks = %d",Total);   
    printf("\n");
    printf("Percentage = %f%%",Percentage);
    
    return 0;
}
