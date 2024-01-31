/*
    Probably a cleaner way to do this.
*/

#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    int digit_seen[10] = {0};
    int digit, i, j, temp;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        digit_seen[digit] += 1;
        n /= 10;
    }

    printf("Repeated digit(s): ");
    for (i = 0; i < 10; i++){
        if (digit_seen[i] > 1){
            printf("%d ", i);
        }
    }

   temp = 0;

   for (j = 0; j < 10; j++){
        if (digit_seen[j] == 0 || digit_seen[j] == 1){
            ;
        }
        else{
            temp += 1;
        }
   }
   if (temp < 1){
    printf("None");
   }
   printf("\n");

    return 0;
}
