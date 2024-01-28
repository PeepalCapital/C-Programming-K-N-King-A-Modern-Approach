#include <stdio.h>

int main(void)
{
    int n, units, tens;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    units = n % 10;
    tens = n / 10;

    printf("The reversal is: %d%d\n", units, tens);

    return 0;
}
