#include <stdio.h>

int main() {
    
    int c, d;
  
    printf("Enter the value for c: ");
    scanf("%d", &c);

    printf("Enter the value for d: ");
    scanf("%d", &d);

    int temp = c;
    c = d;
    d = temp;
    
  
    printf("After interchange, c = %d and d = %d\n", c, d);
    
    return 0;
}
