#include <stdio.h>
#define hourSec 3600
#define minSec 60

int main(void){
    float speed, distance;
    int hour, min, sec, timeSec;
    printf("Enter the speed <km/h>: ");
    scanf("%f",&speed);
    printf("Enter the driving distance <km>: ");
    scanf("%f",&distance);
    timeSec = distance / speed * hourSec;
    hour = timeSec / hourSec; <-- 예전 코드
    min = timeSec % hourSec / minSec;  
    sec = timeSec % minSec;
    printf("The total driving time is %d hours %d minutes %d seconds \n",hour,min,sec);
    return 0;
}