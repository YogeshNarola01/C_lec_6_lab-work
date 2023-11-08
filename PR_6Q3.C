#include<stdio.h>
#include<conio.h>
void main(){
int x,y,z;
clrscr();
printf("Find the third angle of triangle \n");
printf("Enter the value of x : ");
scanf("%d",&x);
printf("Enter the value of y : ");
scanf("%d",&y);
z=180-(x+y);
printf("Third angle value is %d :",z);
getch();
}