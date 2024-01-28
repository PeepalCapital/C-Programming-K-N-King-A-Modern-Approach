/*
    Can be done more elegantly perhaps.
*/

#include <stdio.h>

int main(void)
{
    int n;
    int tens, hundreds, thousands, ten_thousands;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);

    tens = n / 8;
    hundreds = tens / 8;
    thousands = hundreds / 8;
    ten_thousands = thousands / 8;
    printf("In octal, your number is: %d%d%d%d%d\n", ten_thousands % 8, thousands % 8, hundreds % 8, tens % 8, n % 8);

    return 0;
}
