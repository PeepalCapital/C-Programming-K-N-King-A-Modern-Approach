#include<stdio.h>

int main(void)
{
    int r;
    float v;

    printf("Enter radius: ");
    scanf("%d", &r);
    v = (4.0f / 3.f) * 3.14 * r * r * r;
    printf("Volume is %0.2f", v);

    return 0;
}
