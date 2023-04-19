//program to demonstrate function
#include<stdio.h>
#include<conio.h>
void add(int a,int c);

 void main()
 {
 int x,y;
 clrscr();

 printf("Enter the value of x");
 scanf("%d",&x);
 printf("Enter the value of y");
 scanf("%d",&y);

 add(x,y);
 getch();
 }
 void add(int a,int b)
 {
 int add;
 add=a+b;
 printf("Addition of two numbers is %d",add);
}