/*
    Maintaining the array showing frequency of each digit occuring as its nice
*/

#include<stdio.h>
#include<stdbool.h>

void repdigit (int n);

int main(void)
{
    long n;

    while(n > 0){
        printf("Enter a integer number: ");
        scanf("%ld", &n);
        repdigit(n);
            
    }

    return 0;
}

void repdigit (int n){
    int digit_seen[10] = {0};
    int digit, i, j, temp;

    if(n > 0){
        while (n > 0){
        digit = n % 10;
        digit_seen[digit] += 1;
        n /= 10;
        }

        printf("Digit:      ");

        for (j = 0; j < 10; j++){
        printf("%d ", j);
        }

        printf("\n");
        printf("Occurences: ");

        for (i = 0; i < 10; i++){
            printf("%d ", digit_seen[i]);
        }
        printf("\n");;
    }
    
    else if (n <= 0){
        printf("Exiting...\n");
    }
}
