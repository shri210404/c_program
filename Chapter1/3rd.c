/*If the marks obtained by a student in five different subjects are 
input through the keyboard, write a program to find out the 
aggregate marks and percentage marks obtained by the student. 
Assume that the maximum marks that can be obtained by a student 
in each subject is 100.*/

#include <stdio.h>

int main()
{
  int m1,m2,m3,m4,m5;
  float percentage;
  printf("enter marks of maths \n");
  scanf("%d",&m1);
  printf("enter marks of science \n");
  scanf("%d",&m2);
  printf("enter marks of social \n");
  scanf("%d",&m3);
  printf("enter marks of english \n");
  scanf("%d",&m4);
  printf("enter marks of tamil \n");
  scanf("%d",&m5);

  int sum=m1+m2+m3+m4+m5;
  percentage=sum/5;

  printf("the aggregate mark is %d",sum);
  printf("the aggregate mark is %f",percentage);


  }
