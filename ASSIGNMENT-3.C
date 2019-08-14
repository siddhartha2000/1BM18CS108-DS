#include<stdio.h>
#include<conio.h>
#define MAX 20

void push();
void pop();
void check();

int cb[MAX],ts_top;

void main()
{
	int ch2;
	char ch1='y';
	ts_top = -1;
	clrscr();
	while(ch1=='y'||ch1=='Y')
	{
		printf("\n Enter choice: 1.Insert tshirt, 2.Remove tshirt, 3.Check cuboard:\n");
		scanf("%d",&ch2);
		if(ch2==1)
		{
			push();
			check();
		}
		else if(ch2==2)
		{
			pop();
			check();
		}
		else if(ch2==3)
		{
			check();
		}
		else
		printf("\n Wrong input!!");
		printf("\n WANT TO CONTINUE? y/n:");
		fflush(stdin);
		scanf("%s",&ch1);
	}
	getch();
}
void push()
{
	if(ts_top>(MAX-1))
	{
		printf("\n Stack Overflow!!!");
	}
	else
	{
		cb[++ts_top]=ts_top;
	}
}
void pop()
{
	if(ts_top<0)
	{
		printf("\n Stack Underflow");
	}
	else
	{
		ts_top--;
	}
}
void check()
{
	int i=ts_top;
	printf("CUBOARD:");
	while(i>-1)
	{
		printf("\n %d - tshirt",cb[i]+1);
		i--;
	}
}
