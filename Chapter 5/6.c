#include <stdio.h>

int main(void)
{
    long long n, a;
    int check_digit;
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11;

    printf("Enter the first 12 digits of a UPC: ");
    scanf("%lld", &a);
    n = (a - (a % 10)) / 10;

 

    n11 = n % 10;
    n10 = n % 100 / 10;
    n9 = n % 1000 / 100;
    n8 = n % 10000 / 1000;
    n7 = n % 100000 / 10000;
    n6 = n % 1000000 / 100000;
    n5 = n % 10000000 / 1000000;
    n4 = n % 100000000 / 10000000;
    n3 = n % 1000000000 / 100000000;
    n2 = n % 10000000000 / 1000000000;
    n1 = n % 100000000000 / 10000000000;

    check_digit = 9 - (((((n1 + n3 + n5 + n7 + n9 + n11) * 3) + (n2 + n4 + n6 + n8 + n10)) - 1) % 10);

    if (check_digit == a % 10)
    {
        printf("VALID\n");
    }
    else
    {
        printf("NOT VALID\n");
    }
    
    return 0;
}
