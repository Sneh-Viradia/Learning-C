#include<stdio.h>
int main()
{
	int maths,physics,chemistry,entrance,cumulative_marks;
	printf("Enter the marks obtained in Physics subject ");
	scanf("%d",&physics);
	if(physics>200)
		printf("Write correct marks\n");
	printf("Enter the marks obtained in Chemistry subject ");
	scanf("%d",&chemistry);
	if(chemistry>200)
			printf("Write correct marks\n");
	printf("Enter the marks obtained in Maths subject ");
	scanf("%d",&maths);
	if(maths>200)
			printf("Write correct marks\n");
	printf("Enter the marks obtained in Entrance Exam ");
	scanf("%d",&entrance);
	if(entrance>100)
			printf("Write correct marks\n ");
	cumulative_marks=(maths/2)+(chemistry/2)+(physics/2)+entrance;
	printf("Your cummulative marks are %d",cumulative_marks);
	
}
