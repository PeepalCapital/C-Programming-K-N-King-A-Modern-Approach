/*
    Ideally the array should dynamically change its length when taking input from the user.
    I guess this will be done via dynamic memory allocation.
    Here the constraint is that the message is only 100 characters long.
*/

#include<stdio.h>
#include<ctype.h>

#define N 100

int main(void){
    int msg[N] = {};
    int i, j = 0, k, m;
    char ch;

    printf("Enter message: ");

    while((ch = getchar()) != '\n'){
        msg[j] = ch;
        j++;
    }

    for(k = 0; k < N; k++){
        msg[k] = toupper(msg[k]);
        if(msg[k] == 'A'){
            msg[k] = '4';
        }
        if(msg[k] == 'B'){
            msg[k] = '8';
        }
        if(msg[k] == 'E'){
            msg[k] = '3';
        }
        if(msg[k] == 'I'){
            msg[k] = '1';
        }
        if(msg[k] == 'O'){
            msg[k] = '0';
        }
        if(msg[k] == 'S'){
            msg[k] = '5';
        }
    }

    for(m = 0; m < N; m++){
        putchar(msg[m]);
    }
    printf("!!!!!!!!!!\n");

    return 0;
}
