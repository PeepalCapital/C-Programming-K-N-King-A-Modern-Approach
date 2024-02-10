#include<stdio.h>

int main(void){
    char ch;
    float exp, exp_n;

    printf("Enter an expression: ");
    scanf("%f", &exp);

    while((ch = getchar()) != '\n'){
        if (ch == '+'){
            scanf("%f", &exp_n);
            exp = exp + exp_n;
        }
        if (ch == '-'){
            scanf("%f", &exp_n);
            exp = exp - exp_n;
        }
        if (ch == '*'){
            scanf("%f", &exp_n);
            exp = exp * exp_n;
        }
        if (ch == '/'){
            scanf("%f", &exp_n);
            exp = exp / exp_n;
        }
    }
   
    printf("Value of expression: %f\n", exp);

    return 0;
}
