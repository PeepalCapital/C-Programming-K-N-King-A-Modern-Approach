#include<stdio.h>

int main(void){
    char phone_no[15];
    char ch;
    int i = 0;

    printf("Enter phone number: ");
    while((ch = getchar()) != '\n'){
        if(ch == 'A' || ch == 'a' || ch == 'B' || ch == 'b' || ch == 'C' || ch == 'c'){
            phone_no[i] = '2';
        }
        else if(ch == 'D' || ch == 'd' || ch == 'E' || ch == 'e' || ch == 'F' || ch == 'f'){
            phone_no[i] = '3';
        }
        else if(ch == 'G' || ch == 'g' || ch == 'H' || ch == 'h' || ch == 'I' || ch == 'i'){
            phone_no[i] = '4';
        }
        else if(ch == 'J' || ch == 'j' || ch == 'K' || ch == 'k' || ch == 'L' || ch == 'l'){
            phone_no[i] = '5';
        }
        else if(ch == 'M' || ch == 'm' || ch == 'N' || ch == 'n' || ch == 'O' || ch == 'o'){
            phone_no[i] = '6';
        }
        else if(ch == 'P' || ch == 'p' || ch == 'Q' || ch == 'q' || ch == 'R' || ch == 'r' || ch == 'S' || ch == 's'){
            phone_no[i] = '7';
        }
        else if(ch == 'T' || ch == 't' || ch == 'U' || ch == 'u' || ch == 'V' || ch == 'v'){
            phone_no[i] = '8';
        }
        else if(ch == 'W' || ch == 'w' || ch == 'X' || ch == 'x' || ch == 'Y' || ch == 'y'){
            phone_no[i] = '9';
        }
        else{
            phone_no[i] = ch;;
        }
        i++;
    }

    for(int j = 0; j < 15; j++){
        printf("%c", phone_no[j]);
    }

    printf("%c", 10);



    return 0;
}
