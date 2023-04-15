#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();

printf("enter the number");
scanf("%d %d",&a,&b);
printf("a is=%d\n",a);
printf("b is=%d\n",b);

if(a>b)
{
printf("a is greter");
}
else
{
printf("b is greter");
}
getch();
}