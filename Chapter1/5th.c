/*The length and breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the area 
and perimeter of the rectangle, and the area and circumference of 
the circle*/

#include <stdio.h>

int main(){

    float l,b,r;
    float ar_rec,ar_cir;
    float per_rec,circ_cirl;
    printf("enter length of rectangle");
    scanf("%f",&l);
    printf("enter breadth of rectangle");
    scanf("%f",&b);
    printf("enter radius of circle");
    scanf("%f",&r);

    ar_rec=l*b;
    ar_cir=3.14 * r * r;
    per_rec=2*(l+b);
    circ_cirl=3.14*2*r;

    printf("area of rectangle %f \n",ar_rec);
    printf("area of circle %f \n",ar_cir);
    printf("perimeter of rectangle %f \n",per_rec);
    printf("circumference of circle %f \n",circ_cirl);

}

