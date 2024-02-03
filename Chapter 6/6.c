#include<stdio.h>

int main(void){
    int n, square;

    printf("Please enter a positive number till which even squares will be output: ");
    scanf("%d", &n);

    square = 2;

    while (square * square <= n){
        printf("%d\n", square *  square);
        square = square + 2;
    }

    return 0;
}
