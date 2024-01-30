#include <stdio.h>

int main(void)
{
    float commission, price_share, value;
    int share_no;

    printf("Enter the number of shares purchased: ");
    scanf("%d", &share_no);

    printf("The price per share of each share: ");
    scanf("%f", &price_share);
    
    value = share_no * price_share;

    if (value < 2500.00f)
    {
        commission = 30.00f + 0.017f * value;
    }
    else if (value < 6250.00f)
    {
        commission = 56.00f + 0.066f * value;
    }
    else if (value < 20000.00f)
    {
        commission = 76.00f + 0.034f * value;
    }
    else if (value < 50000.00f)
    {
        commission = 100.00f + 0.022f * value;
    }
    else if (value < 500000.00f)
    {
        commission = 155.00f + 0.011f * value;
    }
    else
    {
        commission = 255.00f + 0.009f * value;
    }

    if (commission < 39.00f)
    {
        commission = 39.00f;
    }

    printf("Commission: $%.2f\n", commission);

    if (share_no < 2000)
    {
        printf("Rival's commission: $%.2f\n", 33.00f + 0.03f * share_no);
    }
    else
    {
        printf("Rival's commission: $%.2f\n", 33.00f + 0.02f * share_no);
    }

    return 0;
}
