#include<stdio.h>
#include<conio.h>
#define MAX 3

void push();
void pop();
void display();

int stack[MAX],top;

void main()
{
	int ch2;
	char ch1='y';
	top = -1;
	clrscr();
	while(ch1=='y'||ch1=='Y')
	{
		printf("\n Enter choice of operation on stack: 1.PUSH 2.POP 3.DISPLAY:\n");
		scanf("%d",&ch2);
		if(ch2==1)
		{
			push();
			display();
		}
		else if(ch2==2)
		{
			pop();
			display();
		}
		else if(ch2==3)
		{
			display();
		}
		else
		printf("\n Wrong input");
		printf("\n WANT TO CONTINUE? yes/no:enter y for yes and n for no:\t");
		fflush(stdin);
		scanf("%s",&ch1);
	}
	getch();
}
void push()
{
	if(top>=(MAX-1))
	{
		printf("\n Stack Overflow");
	}
	else
	{
		printf("\nEnter element to be pushed:\t");
		scanf("%d",&stack[++top]);
	}
}
void pop()
{
	if(top<0)
	{
		printf("\n Stack Underflow");
	}
	else
	{
		top--;
		printf("\nThe popped element is: %d ",stack[top+1]);
	}
}
void display()
{
	int i=top;
	if(top<0)
	{
		printf("\nSTACK UNDERFLOW");
	}else
	{
		printf("\nTHE STACK HAS:\n");
		while(i>-1)
		{
			printf("\n %d ",stack[i]);
			i--;
		}
	}
}