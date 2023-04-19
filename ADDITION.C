#include<stdio.h>
#include<conio.h>
void add();
void main()
{
  clrscr();
  add();
  getch();
}
void add()
{
  int a,b,c;

  printf("Enter the value of a");
  scanf("%d",&a);

  printf("Enter the value of b");
  scanf("%d",&b);

  c=a+b;
  printf("Addition of two numbers is %d",c);
}

