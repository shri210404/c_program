#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int area;

    printf("enter 3 sides");
    scanf("%d%d%d",&a,&b,&c);
    area=(a+b+c)/2;
    printf("area is %d",area);

    return 0;
}
