#include<stdio.h>

int main(void)
{
    int r;
    float v;

    r = 10;
    v = (4.0f / 3.f) * 3.14 * r * r * r;
    printf("%f", v);

    return 0;
}
