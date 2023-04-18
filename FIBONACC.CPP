//fibboncci seriese
#include<stdio.h>
#include<conio.h>
void main()
{
   int n1=0,n2=1,n,i,n3;
   clrscr();
   printf("enter the value of n\n");
   scanf("%d",&n);

   printf("\n %d",n1);
   printf("\n %d",n2);

   for(i=2;i<=n;i++)
   {
   n3=n1+n2;
   printf("\n %d",n3);
   n1=n2;
   n2=n3;
   }
   getch();
}