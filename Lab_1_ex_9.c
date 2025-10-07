#include<stdio.h>
int main()
{
	int hours,minutes,seconds,final_seconds;
	printf("Enter time in hours ");
	scanf("%d",&hours);
	printf("in minutes ");
	scanf("%d",&minutes);
	printf("and seconds ");
	scanf("%d",&seconds);
	final_seconds=(hours*3600)+(minutes*60)+seconds;
	printf("The given time in seconds is equal to %d seconds",final_seconds);
	
	return 0;
	
}
