/*
  Not capitalizing the first alphabet of the names as that is not asked in the question.
  Else we can use toupper function.
*/

#include<stdio.h>

int main(void){
    char ch, first;
    int char_count = 0;
    int space_count_after_char = 0;
    int i = 0;
    int last_name[20] = {};

    printf("Enter First and Last name: ");

    while((ch = getchar()) != '\n'){
        if(ch != ' '){
            char_count ++;
            if(char_count == 1){
                first = ch;
            }
            if(space_count_after_char >= 1){
                last_name[i] = ch;
                i++;
            }    
        }
        else if(ch == ' ' && char_count >= 1){
            space_count_after_char++;
        }
    }
    
    for(int j = 0; j < 20; j++){
        if((last_name[j] >= 65 && last_name[j] <= 90) || (last_name[j] >= 97 && last_name[j] <= 122)){
            printf("%c", last_name[j]);
        }
    }

    printf(", %c.\n", first);
    
    return 0;
}
