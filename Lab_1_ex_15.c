#include<stdio.h>
int main()
{
	int maths,physics,chemistry,biology,english,total_marks,marks_division;
	printf("Enter the marks obtained in Chemistry ");
	scanf("%d",&chemistry);
	printf("Enter the marks obtained in Physics ");
	scanf("%d",&physics);
	printf("Enter the marks obtained in Biology ");
	scanf("%d",&biology);
	printf("Enter the marks obtained in Maths ");
	scanf("%d",&maths);
	printf("Enter the marks obtained in English ");
	scanf("%d",&english);
	total_marks=english+biology+chemistry+physics+maths;
	marks_division=(total_marks/5.00);
	printf("Your total marks are %d\n",total_marks);
	if(marks_division>90)
	{
		printf("Your grade is A");
	}
	if(marks_division>80&&marks_division<90)
	{
		printf("Your grade is B");
	}
	if(marks_division>60&&marks_division<80)
	{
		printf("Your grade is C");
	}
	if(marks_division>50&&marks_division<60)
	{
		printf("Your grade is D");
	}
	if(marks_division>40&&marks_division<50)
	{
		printf("Your grade is E");
	}
	if(marks_division<40)
	{
		printf("Your grade is F");
	}
	
	return 0;
}
