#include<stdio.h>

int main(void)
{
    int x, sum;

    printf("Enter value of x for evaluation: ");
    scanf("%d", &x);

    sum = (((((3 * x + 2)) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("The value of the expression is %d", sum);

    return 0;
}
