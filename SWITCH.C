#include<stdio.h>
#include<conio.h>
void main()
{
int no;
clrscr();
printf("enter the number");
scanf("%d",&no);

switch(no)
{
case 1:{
	printf("one");
	break;
	}
case 2:{
       printf("two");
       break;
       }
case 3:{
       printf("three");
       break;
       }
default:{
	  printf("number is not in given range");
	  break;
       }
}
getch();
}