#include <stdio.h>
#define hourToSec 3600
#define minToSec 60

int main(void){
    float speed, distance;
    int hour, min, sec, timeSec;
    printf("Enter the speed <km/h>: ");
    scanf("%f",&speed);
    printf("Enter the driving distance <km>: ");
    scanf("%f",&distance);
    timeSec = distance / speed * hourToSec;
    hour = timeSec / hourToSec; 
    min = timeSec % hourToSec / minToSec;  
    sec = timeSec % minToSec;
    printf("The total driving time is %d hours %d minutes %d seconds \n",hour,min,sec);
    return 0;
}