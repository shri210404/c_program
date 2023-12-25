#include <stdio.h>
#include <math.h>

int main() {
    double t, v;

    printf("Enter the temperature (in degrees Fahrenheit): ");
    scanf("%lf", &t);

    printf("Enter the wind velocity (in miles per hour): ");
    scanf("%lf", &v);

    double wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);

    printf("The wind chill factor is: %.2lf\n", wcf);

    return 0;
}
