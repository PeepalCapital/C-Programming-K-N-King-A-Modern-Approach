#include <stdio.h>

int main(void)
{
    int dollar;

    printf("Enter a $ value: ");
    scanf("%d", &dollar);

    int value_20, value_10, value_5, value_1;

    value_20 = dollar / 20;
    value_10 = (dollar - (value_20 * 20)) / 10;
    value_5 = (dollar - (value_20 * 20) - (value_10 * 10)) / 5;
    value_1 = (dollar - (value_20 * 20) - (value_10 * 10) - (value_5 * 5)) / 1;

    printf("$20 bills: %d\n", value_20);
    printf("$10 bills: %d\n", value_10);
    printf("$5 bills: %d\n", value_5);
    printf("$1 bills: %d\n", value_1);

    return 0;
}
