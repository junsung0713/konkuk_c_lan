#include <stdio.h>

int main(void){
    int year;
    const float yearToSec = 3.156e7;
    printf("Enter your age :");
    scanf("%d", &year);
    printf("%d years old is %f in seconds \n", year, (year*yearToSec));
    printf("or %e in seconds \n", (year* yearToSec));
    return 0;
}   