#include<stdio.h>

int main(void){
    int n, units, tens;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    switch (n){
        case 10:    printf("You enetered the number Ten\n");
                    break;
        case 11:    printf("You enetered the number Eleven\n");
                    break;
        case 12:    printf("You enetered the number Twelve\n");
                    break;
        case 13:    printf("You enetered the number Thirteen\n");
                    break;
        case 14:    printf("You enetered the number Fourteen\n");
                    break;
        case 15:    printf("You enetered the number Fifteen\n");
                    break;
        case 16:    printf("You enetered the number Sixteen\n");
                    break;
        case 17:    printf("You enetered the number Seventeen\n");
                    break;
        case 18:    printf("You enetered the number Eighteen\n");
                    break;
        case 19:    printf("You enetered the number Nineteen\n");
                    break;      
    }

    units = n % 10;
    tens = (n - units) / 10;

    if (n >= 20){
        switch (tens){
            case 2:    printf("You enetered the number Twenty");
                        break;
            case 3:    printf("You enetered the number Thirty");
                        break;
            case 4:    printf("You enetered the number Forty");
                        break;
            case 5:    printf("You enetered the number Fifty");
                        break;
            case 6:    printf("You enetered the number Sixty");
                        break;
            case 7:    printf("You enetered the number Seventy");
                        break;
            case 8:    printf("You enetered the number Eighty");
                        break;
            case 9:    printf("You enetered the number Ninety");
                        break;    
        }

        switch (units){
            case 1:    printf("-One");
                        break;
            case 2:    printf("-Two");
                        break;
            case 3:    printf("-Three");
                        break;
            case 4:    printf("-Four");
                        break;
            case 5:    printf("-Five");
                        break;
            case 6:    printf("-Six");
                        break;
            case 7:    printf("-Seven");
                        break;
            case 8:    printf("-Eight");
                        break;
            case 9:    printf("-Nine");
                        break;     
        } 
        printf("\n");
    }
    

    return 0;
}
