/*Temperature of a city in Fahrenheit degrees is input through the 
keyboard. Write a program to convert this temperature into 
Centigrade degrees.*/

#include <stdio.h>

int main()

{
 float f;
 float c;

 printf("enter the temperature in fahrenheit ");
 scanf("%f",&f);

  c = (f-32)*(0.5/0.9);

 printf("the temperature converted to cenigrade is %f",c);

}

