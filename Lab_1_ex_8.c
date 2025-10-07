#include <stdio.h>
int main() 
{
    long total_seconds = 31558150; 
    long days=total_seconds/(24 * 3600);
    long remaining_seconds=total_seconds % (24*3600);
    long hours=remaining_seconds/3600;
    remaining_seconds%=3600;
    long minutes=remaining_seconds/60;
    printf("The Earth's period of revolution of 31558150 seconds is:\n");
    printf("%ld Days, %ld Hours, and %ld Minutes.\n", days, hours, minutes);

    return 0;
}
