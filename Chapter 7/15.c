/*
    a) 7 b) 16 c) 20 d) 20 but e) f) g) would require perhaps gamma function
    Not sure what the intention of the problem is here
*/

#include<stdio.h>

short factorial (short);

int main(void){

    printf("Factorials\n");
    for(short int i = 0; ;i++){
        printf("%hd! = %hd\n",i, factorial(i));
        if (factorial(i) <= 0){
            break;
        }
    }   
    return 0;
}

short factorial(short n){
    if (n == 0){
        return 1;
    }
    if (n == 1){
        return 1;
    }
    else {
        return factorial(n - 1) * n;
    }
}
