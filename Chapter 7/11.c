/*
  Not capitalizing the first alphabet of the names as that is not asked in the question
*/

#include<stdio.h>

int main(void){
    char ch, first;
    int char_count = 0;
    int space_count_after_char = 0;

    printf("Enter First and Last name: ");

    while((ch = getchar()) != '\n'){
        if(ch != ' '){
            char_count ++;
            if(char_count == 1){
                first = ch;
            }
            if(space_count_after_char >= 1){
                putchar(ch);
            }    
        }
        else if(ch == ' ' && char_count >= 1){
            space_count_after_char++;
        }
    }
    printf(", %c.\n", first);
    
    return 0;
}
