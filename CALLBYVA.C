#include<stdio.h>
#include<conio.h>
void swap(int a,int b)
{
  int t;
  t=a;
  a=b;
  b=t;
  printf("\n value afternsort swap\n");
  printf("\n vlaue of a is:->%d",a);
  printf("\n vlaue of b is:->%d",b);
}
void main()
{
  int x,y;
  clrscr();
  printf("Enter the value of x");
  scanf("%d",&x);
  printf("Enter the value of y");
  scanf("%d",&y);

  swap(x,y);
   printf("\n value before swap\n");
  printf("\n vlaue of x is:->%d",x);
  printf("\n vlaue of y is:->%d",y);
  getch();
}
