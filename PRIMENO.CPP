//number is prime or not
#include<stdio.h>
#include<conio.h>
void main()
{
  int i,m=0,n,flag=0;
  clrscr();

  printf("Enter the value\n");
  scanf("%d",&n);

  m=n/2;
  for(i=2;i<=m;i++)
  {
    if(n%2==0)
    {
     printf("no is not prime");
     flag=1;
     break;
    }
  }
  if(flag==0)
  {
  printf("number is prime");
  }
  getch();
}