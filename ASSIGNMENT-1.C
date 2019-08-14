#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student
{
	char ID[20];
	int age;
	int marks;
};

void main()
{
	struct student s1;
	clrscr();
	printf("\n Enter the info: \n ID:");
	gets(s1.ID);
	printf("\n Age:");
	scanf("%d",&s1.age);
	printf("\nMarks:");
	scanf("%d",&s1.marks);
	if((s1.age>20)&&(s1.marks>=0)&&(s1.marks<=100))
	{
		if(s1.marks>65)
		printf("\n PASS ");
		else
		printf("\n FAIL");
	}
	else
	printf("\n Invalid Data!!!");
	getch();
}

