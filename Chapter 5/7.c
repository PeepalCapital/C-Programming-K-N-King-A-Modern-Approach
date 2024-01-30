/*
    Using arrays only 1 If statement can be used rather than 4.
    I believe this can be generalized to order entire sequences of integers.
*/

#include<stdio.h>

int main(void)
{
    int a[4] = {};
    int n1, n2, n3, n4, i, j, k, temp;

    temp = 0;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);

    for (i = 0; i < 4; i++)
    {
        printf("%d\n", a[i]);
    }

    for (k = 0; k < 3; k++)
    {
        for (j = 3; j > k; j--)
        {
            if (a[j] <  a[j - 1])
            {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }

    printf("Largest integer: %d\n", a[3]);
    printf("Smallest integer: %d\n", a[0]);

    return 0;
}
