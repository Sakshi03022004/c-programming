//demonstrate the array print in assending order
#include<stdio.h>
#include<conio.h>
void main()
{
  int seatno[3],i,j,t;
  clrscr();
  printf("Enter elements in array\n");
  for(i=0;i<3;i++)
  {
  scanf("%d",&seatno[i]);
  }
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    if(seatno[i]>seatno[j])
    {
    t=seatno[i];
    seatno[i]=seatno[j];
    seatno[j]=t;
    }
   }
  }
  printf("Elements in array are:->\n");
  for(i=0;i<3;i++)
  {
  printf("\n %d",seatno[i]);
  }
  getch();
}