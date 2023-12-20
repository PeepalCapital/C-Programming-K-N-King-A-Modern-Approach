#include <stdio.h>

int main(void)
{
    float amount, rate, monthly;
    
    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly);

    float rate_m;
    float first, second, third;

    rate_m = (rate / 100) / 12;

    first  = amount - monthly + (amount * rate_m);
    printf("Balance remaining after first payment: %0.2f\n", first);
    
    second  = first - monthly + (first * rate_m);
    printf("Balance remaining after second payment: %0.2f\n", second);

    third  = second - monthly + (second * rate_m);
    printf("Balance remaining after third payment: %0.2f\n", third);

    return 0;
}
