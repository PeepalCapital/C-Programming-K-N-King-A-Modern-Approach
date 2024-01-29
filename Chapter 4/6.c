/*
    Wonder if there is a better way to extract the digits. Perhaps feed it into an array and then access each element.
*/
#include <stdio.h>

int main(void)
{
    long long n;
    int check_digit;
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%lld", &n);

    n12 = n % 10;
    n11 = n % 100 / 10;
    n10 = n % 1000 / 100;
    n9 = n % 10000 / 1000;
    n8 = n % 100000 / 10000;
    n7 = n % 1000000 / 100000;
    n6 = n % 10000000 / 1000000;
    n5 = n % 100000000 / 10000000;
    n4 = n % 1000000000 / 100000000;
    n3 = n % 10000000000 / 1000000000;
    n2 = n % 100000000000 / 10000000000;
    n1 = n % 1000000000000 / 100000000000;

    check_digit = 9 - (((((n2 + n4 + n6 + n8 + n10 + n12) * 3) + (n1 + n3 + n5 + n7 + n9 + n11)) - 1) % 10);

    printf("Check digit: %d\n", check_digit);
    
    return 0;
}