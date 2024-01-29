#include<stdio.h>

int main(void)
{
    int hr, min;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hr, &min);

    if (hr <= 11)
    {
        printf("Equivalent 12-hour time: %d:%.2d AM\n", hr, min);
    }
    else if (hr == 12)
    {
        printf("Equivalent 12-hour time: 12:%.2d PM\n", min);
    }
    else
    {
        printf("Equivalent 12-hour time: %d:%.2d PM\n", hr - 12, min);
    }

    return 0;
}
