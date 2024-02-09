#include<stdio.h>

int main(void){
    char ch;
    int word_count, char_count, in_word;
    float avg;
    word_count = 0;
    char_count = 0;
    in_word = 0;

    printf("Enter a sentence: ");

    while((ch = getchar()) != '\n'){
        if(ch != ' '){
            char_count++;
            if(in_word == 0){
                word_count++;
            }
            in_word = 1;
        }
        else{
            in_word = 0;
        }
    }
    printf("word_count %d\n", word_count);
    printf("char_count %d\n", char_count);
    avg = (float) char_count / (float) word_count;
    printf("The average word count is %f\n", avg);

    return 0;
}
