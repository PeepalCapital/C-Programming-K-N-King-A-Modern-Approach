#include<stdio.h>

int main(void){
    int i, n;
    short int j, a;
    long int k, b;


    printf("Prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    // my machine is 64 bit machine as 46340^2 gives 2147395600 as the answer
    for (i = 0; i <= n ; i++){
        if (i * i >= 0){
            printf("%40d%40d\n", i, i * i);
        }
    }

    printf("Prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%hd", &a);

    // my machine is 64 bit machine as 1810^2 gives 32761 as the answer
    for (j = 0; j <= a ; j++){
        if (j * j >= 0){
            printf("%20hd%20hd\n", j, j * j);
        }
    }

    printf("Prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%ld", &b);

    // computer overheating but floor square root of 9223372036854775807 is 3037000499
    for (k = 0; k <= b ; k++){
        if (k * k >= 0){
            printf("%50ld%50ld\n", k, k * k);
        }
    }

    return 0;
}
