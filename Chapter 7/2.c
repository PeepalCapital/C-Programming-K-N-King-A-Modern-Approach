#include<stdio.h>

int main(void){
    int i, n;

    printf("Prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar();
 
    for (i = 1; i <= n ; i++){
        printf("%20d%20d\n", i, i * i);
        if(i % 24 == 0){
            printf("Press Enter to continue: ");
            getchar();
        }
    }

    return 0;
}
