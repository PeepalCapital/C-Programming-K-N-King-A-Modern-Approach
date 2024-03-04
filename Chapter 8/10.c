/*
    I don't like these problems. Was there in Chapter 5 also. 
*/

#include<stdio.h>

int main(void){
    int i, j, hh, mm, t_mins, diff_time, temp, new_temp, index;
    int d[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int a[8] = {616, 712, 811, 900, 968, 1045, 1280, 1438};
    int diff[8] = {0};

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hh, &mm);

    if (hh >= 12){
        t_mins = ((hh - 12) *  60) + (12 * 60) + mm;
    }
    else{
        t_mins = (hh *  60) + mm;
    }


    for(i = 0; i < 8; i++){
        diff_time = d[i] - t_mins;
        if(diff_time >= 0){
            diff[i] = diff_time;
        }
        else{
            diff[i] = 0;
        }
    }

    j = 0;

    while(diff[j] == 0){
        j++;
    }

    if (j == 0){
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    }
    else if (j == 1){
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    }
    else if (j == 2){
        printf("Closest departure time is 11:19 a.m., arriving at 01:31 p.m.\n");
    }
    else if (j == 3){
        printf("Closest departure time is 12:47 p.m., arriving at 03:00 p.m.\n");
    }
    else if (j == 4){
        printf("Closest departure time is 02:00 p.m., arriving at 04:08 p.m.\n");
    }
    else if (j == 5){
        printf("Closest departure time is 03:45 p.m., arriving at 05:25 p.m.\n");
    }
    else if (j == 6){
        printf("Closest departure time is 07:00 p.m., arriving at 09:20 p.m.\n");
    }
    else {
        printf("Closest departure time is 09:45 p.m., arriving at 11:58 p.m.\n");
    }
 

    /*
    Departure   Arrival     Dep_24  Arr_24  
    08:00 am    10:16 am    08:00   10:16   
    09:43 am    11:52 am    09:43   11:52
    11:19 am    01:31 pm    11:19   13:31
    12:47 pm    03:00 pm    12:47   15:00
    02:00 pm    04:08 pm    14:00   16:08
    03:45 pm    05:25 pm    15:45   17:25
    07:00 pm    09:20 pm    19:00   21:20
    09:45 pm    11:58 pm    21:45   23:58
    
    d   a
    480	616
    583	712
    679	811
    767	900
    840	968
    945	1045
    1140 1280
    1305 1438
    */
   

    return 0;
}
