#include<stdio.h>

int main(void)
{
    float n;

    printf("Enter wind speed in knots: ");
    scanf("%f", &n);

    if (n < 1)
    {
        printf("Beaufort Description: Calm\n");
    }
    else if (n >= 1 && n <= 3)
    {
        printf("Beaufort Description: Light air\n");
    }
    else if (n >= 4 && n <= 27)
    {
        printf("Beaufort Description: Breeze\n");
    }
    else if (n >= 28 && n <= 47)
    {
        printf("Beaufort Description: Gale\n");
    }
    else if (n >= 48 && n <= 63)
    {
        printf("Beaufort Description: Storm\n");
    }
    else
    {
        printf("Beaufort Description: Hurricane\n");
    }  

    return 0;
}
