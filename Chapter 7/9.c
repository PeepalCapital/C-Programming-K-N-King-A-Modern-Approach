#include<stdio.h>

int main(void){
    char ch;
    int hh, mm;

    printf("Enter a 12-hour time(hh:mm AM/PM): ");
    scanf("%d:%d %c", &hh, &mm, &ch);
    if (ch == 'P' && hh != 12){
        hh = 12 + hh;
    }
    if (ch == 'A' && hh == 12){
        hh = 12 - hh;
    }
    printf("Equivalent 24-hour time: %02d:%02d\n", hh, mm);

    return 0;
}
