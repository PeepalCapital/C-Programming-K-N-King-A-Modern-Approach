#include <stdio.h>

int main(void)
{
    float amount, rate, monthly;
    int payments;
    
    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly);
    printf("Enter number of payments: ");
    scanf("%d", &payments);

    float rate_m, balance;
    rate_m = (rate / 100) / 12;

    for (int i = 0; i < payments; i++){
        
        balance = amount - monthly + (amount *  rate_m);
        if (balance > 0){
            printf("Balance remaining after %d payment: %0.2f\n", i + 1, balance);
            amount = balance;
            balance = 0;
        }
        
    }

    return 0;
}
