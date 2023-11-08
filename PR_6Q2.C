#include<stdio.h>
#include<conio.h>
void main(){
float bs,hra,da,ta;
float gs;
clrscr();
printf("Find the program to gross salary by adding % of HRA,DA and TA of user choice.. \n\n");
printf("Enter the your basic salary : ");
scanf("%f",&bs);
hra=bs*0.1;
da=bs*0.05;
ta=bs*0.08;
gs=(bs+hra+da+ta);
printf("Yore Gross Salary is %0.2f ",gs);
getch();
}