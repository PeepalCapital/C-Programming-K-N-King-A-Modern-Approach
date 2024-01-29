/*
    Ideally an implementation of len function of python for an integer cast as a string should be the solution
*/

#include <stdio.h>

int main(void)
{
    int n;
    int thousands, hundreds, tens, units;

    printf("Enter a number: ");
    scanf("%d", &n);

    thousands = n / 1000;
    hundreds = (n % 1000) / 100;
    tens = (n % 100) / 10;
    units = n % 10;

    if (thousands > 0)
    {
        printf("The number %d has %d digits\n", n, 4);
    }
    else if (hundreds > 0)
    {
        printf("The number %d has %d digits\n", n, 3);
    }
    else if (tens > 0)
    {
        printf("The number %d has %d digits\n", n, 2);
    }
    else
    {
        printf("The number %d has %d digit\n", n, 1);
    }
    
    return 0;
}
