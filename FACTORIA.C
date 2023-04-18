#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,fact=1;
   clrscr();

   printf("Enter the number:-");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
   fact=fact*i;
   }
   printf("factorial of given number is %d=%d",n,fact);
   getch();
   }