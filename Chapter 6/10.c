#include<stdio.h>

int main(void){
    int dd, mm, yy;
    int max_dd, max_mm, max_yy;
    int i;
    int flag = 1;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm, &dd, &yy);

    max_dd = dd;
    max_mm = mm;
    max_yy = yy;

    while (flag == 1){
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &mm, &dd, &yy);
        if (mm == 0 && dd == 0 && yy == 0){
            flag = 0;
        }
        else{
            if(yy < max_yy){
                max_dd = dd;
                max_mm = mm;
                max_yy = yy;
            }
            else if(yy == max_yy && mm < max_mm){
                max_dd = dd;
                max_mm = mm;
                max_yy = yy;
            }
            else if(mm == max_mm && dd < max_dd){
                max_dd = dd;
                max_mm = mm;
                max_yy = yy;
            }
            else if(yy == max_yy && mm == max_mm && dd == max_dd){
                max_dd = dd;
                max_mm = mm;
                max_yy = yy;
            }
            else{
                ;
            }
        }
    }
    printf("%02d/%02d/%02d is the earliest date.\n", max_mm, max_dd, max_yy);
    
    return 0;
}
