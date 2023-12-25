#include <stdio.h> 
#include <math.h>  
  
int main()  
{  
    float degree, r;  
    const float p= 3.14;  
  
    printf("Enter angle in degree\n");  
    scanf("%f",&degree);  
  
    r = degree * (p/ 180.0);  
  
    printf("Sin(%f) = %f\n", degree, sin(r));  
    printf("Cos(%f) = %f\n", degree, cos(r));  
    printf("Tan(%f) = %f\n", degree, tan(r));  
    printf("Cosec(%f) = %f\n", degree, 1/sin(r));  
    printf("Sec(%f) = %f\n", degree, 1/cos(r));  
    printf("Cot(%f) = %f\n", degree, 1/tan(r));  
  
    return 0;  
}  
