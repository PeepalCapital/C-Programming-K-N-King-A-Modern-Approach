#include<stdio.h>

int main(void){
    int month, day, i, start;

    printf("Enter number of days in month: ");
    scanf("%d", &month);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &day);

    start = 0;
    while (start < day - 1){
        printf("\t");
        start++;
    }

    for (i = 1; i <= month; i++){
        printf("%d\t", i);
        if ((start + i) % 7 == 0){
            printf("\n");
        }
    }

    printf("\n");

    return 0;
}
