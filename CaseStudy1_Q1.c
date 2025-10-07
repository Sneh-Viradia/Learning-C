#include<stdio.h>
int main()
{
    char str[100],temp;
    int i=0,n,j;
    printf("Enter a string: ");
    scanf("%s",str);
    printf("The length of the string is: ");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        for(i=j+1;i<=n;i++)
        {
            if(str[i]>str[i-1])
            {
                temp=str[i];
                str[i]=str[i-1];
                str[i-1]=temp;
            }
        
        }
    }
    printf("The sorted string is: %s",str);
    return 0;

    
}