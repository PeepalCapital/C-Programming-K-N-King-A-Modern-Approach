#include<stdio.h>

int factorial (int);

int main(void){
    int n, i;
    float series;

    printf("Enter a digit 'n' up to which 'e' will be computed: ");
    scanf("%d", &n);

    series = 0;

    for(i = 0; i <= n; i++){
        series = series + (1.0f / (float)factorial(i));
    }

    printf("The value os 'e' for '%d' is: %f \n", n, series);

    return 0;
}

int factorial(int n){
    if (n == 0){
        return 1;
    }
    if (n == 1){
        return 1;
    }
    else {
        return factorial(n - 1) * n;
    }
}
