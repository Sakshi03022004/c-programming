//print array elements
#include<stdio.h>
#include<conio.h>
void main()
{
  int seatno[5],i;//array declaration
  clrscr();

  printf("Enter elements in array\n");
  for(i=0;i<5;i++)
  {
  scanf("%d",&seatno[i]);
  }

  printf("Elements in array are:->\n");
  for(i=0;i<5;i++)
  {
  printf("\n %d",seatno[i]);
  }
  getch();
}