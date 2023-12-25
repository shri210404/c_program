#include <stdio.h>

int main() {
    int n100, n50, n10, n5, n2, n1, amount;

    printf("\nEnter the amount : ");
    scanf("%d", &amount);

    
    int originalAmount = amount;

    n100 = amount / 100;
    amount = amount % 100;

    n50 = amount / 50;
    amount = amount % 50;

    n10 = amount / 10;
    amount = amount % 10;

    n5 = amount / 5;
    amount = amount % 5;

    n2 = amount / 2;
    amount = amount % 2;

    n1 = amount / 1;

    printf("\n\nTo give an amount of %d you have to give : \n", originalAmount);
    printf("%d of notes of hundred.\n", n100);
    printf("%d of notes of fifty.\n", n50);
    printf("%d of notes of ten.\n", n10);
    printf("%d of notes of five.\n", n5);
    printf("%d of notes of two.\n", n2);
    printf("%d of notes of one.\n", n1);

    getchar();
    return 0;
}
