#include<stdio.h>

int main(void)
{
    float a, b;

    printf("Enter value in dollars and cents in decimal: ");
    scanf("%f", &a);

    b = a * 1.05;

    printf("Value after taxes is: %0.2f\n", b);

    return 0;
}
