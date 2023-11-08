#include<stdio.h>
#include<conio.h>
void main(){
float f;
float sum=0;
clrscr();
printf("Find the formula of fahrenheit to celsius \n");
printf("Enter the value of fahrenheit f: ");
scanf("%f",&f);
sum=(f-32)*5/9;
printf("Celsiust is %0.1f",sum);
getch();
}