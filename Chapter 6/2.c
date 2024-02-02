#include<stdio.h>

int main(void){
    int x, y, larger, smaller, quotient, remainder;

    printf("Enter two non negative integers: ");
    scanf("%d %d", &x, &y);

    if(x >= y){
        larger = x;
        smaller = y;     
    }
    else{
        larger = y;
        smaller = x; 
    }
    
    quotient = larger / smaller;
    remainder = larger - (quotient *  smaller);
    
    while(remainder > 0){
        larger = smaller;
        smaller = remainder;
        quotient = larger / smaller;
        remainder = larger - (quotient *  smaller);
    }

    printf("Highest Common Factor is: %d\n", smaller);

    return 0;
}
