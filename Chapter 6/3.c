#include<stdio.h>

int gcd (int x, int y);

int main(void){
    int x, y, hcf, num, deno;
    printf("Enter a fraction (num/deno): ");
    scanf("%d/%d", &x, &y);
    hcf = gcd(x, y);
    num = x / hcf;
    deno = y / hcf;
    printf("In lowest terms %d/%d\n", num, deno);

    return 0;
}

int gcd (int x, int y){
    int larger, smaller, quotient, remainder;

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

    return(smaller);
}
