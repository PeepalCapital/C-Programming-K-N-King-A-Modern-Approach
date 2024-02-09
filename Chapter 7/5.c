#include<stdio.h>
#include<ctype.h>

int main(void){
    char ch, up_ch;
    int total = 0;
    
    printf("Enter a word: ");

    while((ch = getchar()) != '\n'){
        up_ch = toupper(ch);
        if(up_ch == 'A' || up_ch == 'E' || up_ch == 'I' || up_ch == 'L' || up_ch == 'N'
            || up_ch == 'O' || up_ch == 'R' || up_ch == 'S' || up_ch == 'T' || up_ch == 'U'){
            total += 1;            
        }
        if(up_ch == 'D' || up_ch == 'G'){
            total += 2;            
        }
        if(up_ch == 'B' || up_ch == 'C' || up_ch == 'M' || up_ch == 'P'){
            total += 3;            
        }
        if(up_ch == 'F' || up_ch == 'H' || up_ch == 'V' || up_ch == 'W' || up_ch == 'Y'){
            total += 4;            
        }
        if(up_ch == 'K'){
            total += 5;            
        }
        if(up_ch == 'J' || up_ch == 'X'){
            total += 8;            
        }
        if(up_ch == 'Q' || up_ch == 'Z'){
            total += 10;            
        }
    }
    printf("Scrabble value %d\n", total);

    return 0;
}
