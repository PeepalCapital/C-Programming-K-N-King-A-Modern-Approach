#include<stdio.h>

#define N 5

int main(void){
    int a[N] = {}, row_total[N] = {}, col_total[N] = {};
    int i, j, k, m, p;
    int row_sum, col_sum;

    for(i = 0; i < N; i++){
        printf("Enter row %d: ", i + 1);
        for(j = 0; j < N - 1; j++){
            scanf("%d ", &a[j]);
        }
        scanf("%d", &a[N - 1]);

        row_sum = 0;
        for(k = 0; k < N; k++){
            row_sum = row_sum + a[k];
        }
        row_total[i] = row_sum;
        for(m = 0; m < N; m++){
            col_total[m] = col_total[m] + a[m];
        }
    }

    printf("\n");
    printf("Row Totals: ");
    for(p = 0; p < N; p++){
        printf("%02d ", row_total[p]);
    }

    printf("\n");

    printf("Column Totals: ");
    for(p = 0; p < N; p++){
        printf("%02d ", col_total[p]);
    }

    printf("\n");

    return 0;
}
