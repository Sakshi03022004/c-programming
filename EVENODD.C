#include<stdio.h>
#include<conio.h>
void main()
{
int no;
clrscr();
printf("enter the number\n");
scanf("%d",&no);

if(no%2==0)
{
printf("number is even");
}
else
{
printf("number is odd");
}
getch();
}