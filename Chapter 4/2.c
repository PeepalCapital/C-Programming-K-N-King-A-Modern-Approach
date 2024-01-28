#include <stdio.h>

int main(void)
{
    int n, units, tens, hundreds;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    units = n % 10;
    tens = ((n % 100) - units) / 10;
    hundreds = n / 100;

    printf("The reversal is: %d%d%d\n", units, tens, hundreds);

    return 0;
}
