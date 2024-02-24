/*

Not making this clean to consider negative values etc. But very much doable.

*/

#include<stdio.h>

float income_tax (int n);


int main(void){

    float taxable_income;
    printf("Enter taxable income: ");
    scanf("%f", &taxable_income);

    printf("Your tax due is: %0.2f\n", income_tax(taxable_income));

    return 0;
}

float income_tax (int n){
    if (n < 750 && n >= 0){
        return (0.01 * n);
    }
    if(n < 2250){
        return (0.02 * (n - 750) + 7.50);
    }
    if(n < 3750){
        return (0.03 * (n - 2250) + 37.50);
    }
    if(n < 5250){
        return (0.04 * (n - 3750) + 82.50);
    }
    if(n <= 7000){
        return (0.05 * (n - 5250) + 142.50);
    }
    if(n > 7000){
        return (0.06 * (n - 7000) + 230);
    }
    else{
        return -1;
    }
}
