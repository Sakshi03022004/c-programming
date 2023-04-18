//armstrong number
#include<stdio.h>
#include<conio.h>
void main()
{
   int n,r,sum=0,temp;
   clrscr();
   printf("enter the number\n");
   scanf("%d",&n);
   temp=n;
   while(n>0)
   {
   r=n%10;
   sum=sum+(r*r*r);
   n=n/10;
   }
   if(temp==sum)
   {
   printf("number is armstrong");
   }
   else
   {
   printf("number is not armstrong");
   }
   getch();
}