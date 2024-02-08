#include<stdio.h>

int main(void){
    char ch;

    printf("Enter a phone number: ");
    while((ch = getchar()) != '\n'){
        if(ch == 'A' || ch == 'a' || ch == 'B' || ch == 'b' || ch == 'C' || ch == 'c'){
            putchar('2');
        }
        else if(ch == 'D' || ch == 'd' || ch == 'E' || ch == 'e' || ch == 'F' || ch == 'f'){
            putchar('3');
        }
        else if(ch == 'G' || ch == 'g' || ch == 'H' || ch == 'h' || ch == 'I' || ch == 'i'){
            putchar('4');
        }
        else if(ch == 'J' || ch == 'j' || ch == 'K' || ch == 'k' || ch == 'L' || ch == 'l'){
            putchar('5');
        }
        else if(ch == 'M' || ch == 'm' || ch == 'N' || ch == 'n' || ch == 'O' || ch == 'o'){
            putchar('6');
        }
        else if(ch == 'P' || ch == 'p' || ch == 'Q' || ch == 'q' || ch == 'R' || ch == 'r' || ch == 'S' || ch == 's'){
            putchar('7');
        }
        else if(ch == 'T' || ch == 't' || ch == 'U' || ch == 'u' || ch == 'V' || ch == 'v'){
            putchar('8');
        }
        else if(ch == 'W' || ch == 'w' || ch == 'X' || ch == 'x' || ch == 'Y' || ch == 'y'){
            putchar('9');
        }
        else{
            putchar(ch);
        }
    }
    printf("\n");

    return 0;
}
