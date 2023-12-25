#include <stdio.h> 
#include <math.h>
  
int main()  
{  
    float x, y, r, theta;  
    const float p = 3.14;  
  
    printf("Enter Cartesian Co-ordinates(x, y)\n");  
    scanf("%f%f", &x, &y);  
  
    r     = sqrt(x*x + y*y);  
    theta = atan(y/x);         
  
    theta = theta * (180.0 / p);
  
    printf("Polar Co-ordinates: (r, theta) = (%f, %f)\n", r, theta);  
  
    return 0;  
}  
