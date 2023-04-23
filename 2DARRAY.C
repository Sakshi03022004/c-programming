//program to demonstarte two dimentional array
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[2][2],i,j;
  clrscr();
  printf("enter element i in array\n");
  for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
    scanf("%d",&a[i][j]);
    }
  }
  printf("Enter in array are:->\n");
  for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
    printf("%d",a[i][j]);
    printf("\t");
   }
   printf("\n");
   }
   getch();
}