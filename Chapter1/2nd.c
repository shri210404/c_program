//The distance between two cities (in km.) is input through the 
//keyboard. Write a program to convert and print this distance in 
//meters, feet, inches and centimeters

#include <stdio.h>

int main()
{
 float km,m,f,in,cm;
 printf("enter the distance betweeen the 2 cities in km \n");
 scanf("%f",&km);

 m=km*1000;
 printf("the distance converted to m %f \n",m);

 f=km*3280.8399;
 printf("the distance converted to feet%f \n",f);

 in=km*39370.0787;
 printf("the distance converted to inches%f \n",in);

 cm=km*100000;
 printf("the distance converted to cm is %f \n",cm);

 return (0);

}

