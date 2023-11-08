#include<stdio.h>
#include<conio.h>
void main(){
float c;
float sum=0;
clrscr();
printf("Find the formula of celsius to fahrenheit \n");
printf("Enter the value of celsius c: ");
scanf("%f",&c);
sum=(c*9/5)+32;
printf("Fahrenheit is %0.1f",sum);
getch();
}