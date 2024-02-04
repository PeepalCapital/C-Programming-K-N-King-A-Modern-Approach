#include<stdio.h>

int factorial (int);

int main(void){
    int n, i;
    float series, epsilon, term;

    printf("Enter a digit 'n' up to which 'e' will be computed: ");
    scanf("%d", &n);
    printf("Enter epsilon which is the last term computed: ");
    scanf("%f", &epsilon);

    series = 0;
    term = 1;
    i = 0;

    while (term >= epsilon){
        term = (1.0f / (float)factorial(i));
        series = series + term;
        i++;
    }

    printf("The value of 'e' for '%d' is when last term is lower than %f: %f \n", n, term, series);

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
