//program to find largest element in array
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i,large;
 clrscr();
 printf("enter element in array \n");
 for(i=0;i<5;i++)
  {
   scanf("%d",&a[i]);
   }
   large=a[0];
   for(i=0;i<5;i++)
   {
    if(a[i]>large)
    {
      large=a[i];
    }
   }
   printf("largestelement in array is:->%d",large);
   getch();
 }