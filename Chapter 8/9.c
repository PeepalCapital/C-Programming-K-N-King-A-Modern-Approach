#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>

#define N 10

int main (void){
    char matrix [N] [N];
    int row, col, arbitno, rowcount, colcount, i, flag;
    int zero, one, two, three;

    srand((unsigned) time(NULL));

    for (row = 0; row < N; row++){
        for (col = 0; col < N; col++){
            matrix [row] [col] = '.';
        }
    }

    printf("Matrix at Start \n");

    for (row = 0; row < N; row++){
        for (col = 0; col < N; col++){
            printf(" %c ", matrix[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    rowcount = 0;
    colcount = 0;
    zero = 0;
    one = 0;
    two = 0;
    three = 0;

    flag = 0;
    i = 65;

    matrix [rowcount] [colcount] = i;
    
    i++;

    while(flag == 0 && i <= 90){

        arbitno = rand() % 4;
        
        if(matrix [rowcount] [colcount + 1] == '.' && (colcount + 1) % 10 != 0){
            zero = 0;
        }
        else{
            zero = 1;
        }

        if(matrix [rowcount + 1] [colcount] == '.' && (rowcount + 1) % 10 != 0){
            one = 0;
        }
        else{
            one = 1;
        }

        if(matrix [rowcount] [colcount - 1] == '.' && (colcount - 1) >= 0){
            two = 0;
        }
        else{
            two = 1;
        }

        if(matrix [rowcount - 1] [colcount] == '.' && (rowcount - 1) >= 0){
            three = 0;
        }
        else{
            three = 1;
        }

        if(zero == 1 && one == 1 && two == 1 && three == 1){
            flag = 1;
        }

        if(arbitno == 0 && zero == 0){
            matrix [rowcount] [colcount + 1] = i;
            rowcount = rowcount;
            colcount = colcount + 1;
            i++;
        }

        if(arbitno == 1 && one == 0){
            matrix [rowcount + 1] [colcount] = i;
            rowcount = rowcount + 1;
            colcount = colcount;
            i++;
        }

        if(arbitno == 2 && two == 0){
            matrix [rowcount] [colcount - 1] = i;
            rowcount = rowcount;
            colcount = colcount - 1;
            i++;
        }

        if(arbitno == 3 && three == 0){
            matrix [rowcount - 1] [colcount] = i;
            rowcount = rowcount - 1;
            colcount = colcount;
            i++;
        }
    }

    printf("Matrix After Randomwalk\n");
    
    for (row = 0; row < N; row++){
        for (col = 0; col < N; col++){
            printf(" %c ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
