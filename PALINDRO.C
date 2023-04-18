#include<stdio.h>
#include<conio.h>
void main()
{
   int n,r,sum=0,temp;
   clrscr();

   printf("enter the number");
   scanf("%d",&n);
   temp=n;

   while(n>0)
   {
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
    }
    if(temp==sum)
    {
    printf("palindrom number");
    }
    else
    {
    printf("not palindrome number");
    }
    getch();
}