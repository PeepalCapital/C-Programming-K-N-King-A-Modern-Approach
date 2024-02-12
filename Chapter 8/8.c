/*
    This assumes that maximum marks is 100 and minimum is 0.
    Also assuming students get integer scores. Else we can convert to floats.
    I have used single dimension arrays to compute every metric.
*/

#include<stdio.h>

#define N 5

int main(void){
    int a[N] = {}, row_total[N] = {}, col_total[N] = {}, col_max[N] = {}, col_min[N] = {};
    int i, j, k, m, p, r, s, t;
    int row_sum, col_sum;

    for(i = 0; i < N; i++){
        printf("Enter grades for student (out of 100) %d: ", i + 1);
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
        if(i == 0){
            for(r = 0; r < N; r++){
                col_max[r] = a[r];
                col_min[r] = a[r];
            }
        }
        else{
            for(s = 0; s < N; s++){
                if(a[s] > col_max[s]){
                    col_max[s] = a[s];
                }
            }
            for(t = 0; t < N; t++){
                if(a[t] < col_min[t]){
                    col_min[t] = a[t];
                }
            }
        }
    }

    printf("\n");

    printf("Total Scores:\n");
    for(p = 0; p < N; p++){
        printf("Student %d: %02d ", p + 1, row_total[p]);
    }

    printf("\n");

    printf("Average Scores:\n");
    for(p = 0; p < N; p++){
        printf("Student %d: %02.2f ", p + 1, (float) row_total[p] / 5);
    }

    printf("\n");

    printf("Average Scores per Quiz:\n");
    for(p = 0; p < N; p++){
        printf("Quiz %d: %02.2f ", p + 1, (float) col_total[p] / 5);
    }

    printf("\n");

    printf("Max Scores per Quiz:\n");
    for(p = 0; p < N; p++){
        printf("Quiz %d: %02d ", p + 1, col_max[p]);
    }

    printf("\n");

    printf("Min Scores per Quiz:\n");
    for(p = 0; p < N; p++){
        printf("Quiz %d: %02d ", p + 1, col_min[p]);
    }

    printf("\n");

    return 0;
}
