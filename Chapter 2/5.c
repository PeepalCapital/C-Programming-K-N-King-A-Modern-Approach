#include<stdio.h>

int main(void)
{
    int i, poly;

    printf("Enter value of x: ");
    scanf("%d", &i);

    poly = (3 * i * i * i * i * i) + (2 * i * i * i * i) - (5 * i * i * i) - (i * i) + (7 * i) - 6;
    
    printf(" Value of polynomial expression is: %d\n", poly);

    return 0;
}
