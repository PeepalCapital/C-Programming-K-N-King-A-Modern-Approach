#include<stdio.h>

int main(void)
{
    int item, d, m, y;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item);
    
    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);

    printf("Item\t\tUnit\t\tPurchase\n    \t\tPrice\t\tDate\n");

    printf("%-d\t\t%.2f\t\t%d%.2d%.2d\n", item, price, y, m, d);

    return 0;
}
