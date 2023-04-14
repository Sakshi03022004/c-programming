#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,temp;
 clrscr();
 printf("enter the value of a \n");
 scanf("%d",&a);
 printf("enter the value of b \n");
 scanf("%d",&b);

 printf("Before swapping value of a is %d\n",a);
 printf("Before swapping value of b is %d\n",b);

 temp=a;
 a=b;
 b=temp;

 printf("After swapping value of a is=%d\n",a);
 printf("After swapping value of b is=%d\n",b);
 getch();
}