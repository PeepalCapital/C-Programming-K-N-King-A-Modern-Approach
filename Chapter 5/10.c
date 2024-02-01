#include<stdio.h>

int main(void){
    int tens, grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    tens = grade / 10;

    printf("Letter Grade: ");

    if(grade > 100 || grade < 0){
        printf("Illegal Grade\n");
    }
    else if (grade == 100){
        printf("A\n");
    }
    else{
        switch (tens){
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        case 5: case 4: case 3: case 2: case 1: case 0:
            printf("F\n");
            break;
    }

    }

    

    return 0;
}
