/*
    Putting floats to manage treatment of non integer solutions
*/

#include<stdio.h>

float polynomial(float n);

int main(void){
    float x;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("The value of the polynomial is %f\n.", polynomial(x));

    return 0;
}

float polynomial(float n){
    float term;
    term = (3 * n * n * n * n * n) + (2 * n * n * n * n) - (5 * n * n * n) - (n * n) + (7 * n) - 6;
    return term;
}
