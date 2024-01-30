#include<stdio.h>

int main(void)
{
    float first_no, temp;

    printf("Enter a number: ");
    scanf("%f", &first_no);
    temp = 0.00f;

    while (first_no > 0)
    {
        if (first_no > temp)
        {
            temp = first_no;
        }
        printf("Enter a number: ");
        scanf("%f", &first_no);
    }

    printf("The largest number is %f\n", temp);

    return 0;
}
