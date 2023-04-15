#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter a\n");
scanf("%d",&a);
printf("enter b\n");
scanf("%d",&b);
printf("enter c\n");
scanf("%d",&c);

if((a>b)&&(a>c))
{
printf("a is greter");
}
else if((b>a)&&(b>c))
{
printf("b is greter");
}
else if((c>a)&&(c>b))
{
printf("c is greter");
}
else
{
printf("all are equal or two number are equal");
}
getch();
}