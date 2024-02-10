#include<stdio.h>
#include<math.h>

int main(void){
    double x, y, x_y, avg, diff;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    y = 1.0f;
    diff = 0.00001f * y;

    while(diff >= (0.00001f * y)){
        x_y = x / y;
        avg = (y + x_y) / 2;
        diff = fabs(avg - y);
        y = avg;
    }

    printf("Square root: %lf\n", y);
    return 0;
}
