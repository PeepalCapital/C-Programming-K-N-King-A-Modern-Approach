#include<stdio.h>

int main(void){
    char ch;
    int n = 0;

    printf("Enter a sentence: ");
    while((ch = getchar()) != '\n'){
        if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u'){
            n++;
        }
    }
    printf("Your sentence contains %d vowels.\n", n);

    return 0;
}
