#include <stdio.h>

int main(void)
{
    int n, units;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The reversal is: ");

    do {
        units = n % 10;
        printf("%d", units);
        n = n / 10; 
    } while (n > 0);

    printf("\n");

    return 0;
}
