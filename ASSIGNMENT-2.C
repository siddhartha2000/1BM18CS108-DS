#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter the numbers to be swapped:");
	scanf("%d%d",&a,&b);
	printf("\n The numbers before swap are: \nNumber1:%d, Number2:%d",a,b);
	swap(&a,&b);
	printf("\n The Swapped numbers  are:\nNumber1:%d, Number2:%d",a,b);
	getch();
}
void swap(int *x,int *y)
{
	int flag;
	flag=*x;
	*x=*y;
	*y=flag;
}
