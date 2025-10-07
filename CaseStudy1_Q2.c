/*#include <stdio.h>
int main()
{
    int n, a, b, diff, process = 0, i = 0, sum = 0, k;
    float avg;
    printf("Enter the number of jars: ");
    scanf("%d", &n);
    printf("Enter the number of processes: ");
    scanf("%d", &process);
    while (i < process)
    {
        printf("Enter the values of a (b>a):  ");
        scanf("%d", &a);
        printf("Enter the values of b(b>a): ");
        scanf("%d", &b);
        printf("Enter the number of candies to be added in each jar: ");
        scanf("%d", &k);
        diff = b - a + 1;
        sum = sum + (diff * k);
        i++;
    }
    avg = sum / n;
    printf("The average number of candies in each jar is : %f", avg);
    return 0;
}*/

#include <stdio.h>
int main()
{
    int n, m, a, b, k, i, j, sum = 0;
    printf("Enter values of n and m:");
    scanf("%d%d", &n, &m);
    int array[n];
    for (i = 0; i < n; i++)
    {
        array[i] = 0;
    }
    for (i = 0; i < m; i++)
    {
        printf("Enter a,b and k respectively:");
        scanf("%d%d%d", &a, &b, &k);
        for (j = a; j <= b; j++)
        {
            array[j] = array[j] + k;
            sum = sum + k;
        }
    }
    printf("Total=%d,Average=%d",sum,sum / n);
}