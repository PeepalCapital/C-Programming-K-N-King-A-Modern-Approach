
/* Taking help on this problem. I will need to revist again. 
Stopped programming in C a year ago after this one. Moved to Common Lisp for a while. */


#include <stdio.h>

#define MAX_LEN 100

int main() {
    char sentence[MAX_LEN], ch, terminator;
    int i = 0, end, start;

    // Read characters one by one into sentence array
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n' && i < MAX_LEN - 1) {
        if (ch == '.' || ch == '?' || ch == '!') {
            terminator = ch;
            break;
        }
        sentence[i++] = ch;
    }
    sentence[i] = '\0';  // Null-terminate the sentence

    // Process sentence in reverse
    printf("Reversed: ");
    end = i - 1; // Last index of the last word

    while (end >= 0) {
        // Skip trailing spaces
        while (end >= 0 && sentence[end] == ' ') {
            end--;
        }
        
        // Find the start of the word
        start = end;
        while (start >= 0 && sentence[start] != ' ') {
            start--;
        }
        
        // Print the word
        for (int j = start + 1; j <= end; j++) {
            putchar(sentence[j]);
        }
        
        // Print space if there are more words
        if (start > 0) {
            putchar(' ');
        }
        
        // Move to the next word
        end = start - 1;
    }
    
    // Print the terminating character
    printf("%c\n", terminator);
    
    return 0;
}
