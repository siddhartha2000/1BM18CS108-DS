#include<stdio.h>
#include<conio.h>

void swap(int *,int *);
void main()
{
	int num1,num2;
	clrscr();
	printf("\n Enter the numbers to be swapped:");
	scanf("%d %d",&num1,&num2);
	printf("\n Before swap: \nNum1:%d, Num2:%d",num1,num2);
	swap(&num1,&num2);
	printf("\n The Swapped numbers now are:\nNum1:%d, Num2:%d",num1,num2);
	getch();
}
void swap(int *num0,int *num01)
{
	int num02;
	num02=*num0;
	*num0=*num01;
	*num01=num02;
}
