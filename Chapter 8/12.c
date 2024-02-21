#include<stdio.h>
#include<ctype.h>

int main(void){
    char ch, up_ch;
    int total = 0;
    int values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    
    printf("Enter a word: ");

    while((ch = getchar()) != '\n'){
        up_ch = toupper(ch);
        total = total + values[up_ch - 65];
    }
    
    printf("Scrabble value %d\n", total);

    return 0;
}
