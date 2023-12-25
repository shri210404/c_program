//Ramesh’s basic salary is input through the keyboard. His dearness 
//allowance is 40% of basic salary, and house rent allowance is 20% of 
//basic salary. Write a program to calculate his gross salary 

#include <stdio.h>

int main()
{
int s;
int d;
int r;
int w;

printf("Enter basic salary");
scanf("%d",&s);

d=(0.4)*s;
r=(0.2)*s;

w=d+r+s;

printf("whole salary is %d",w);

}
