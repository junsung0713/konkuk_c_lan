#include <stdio.h>

#define year 365 //1년 일수
#define beerCal 150 // 맥주 칼로리
#define calPerMin 3.75 // 40분  에 150칼로리, 1분에 3.75칼로리

int main(void){ 
    float beerAvg, excerciseAvg ,totalBeerCal, totalExcercise, extraExcercise, excercisePerDay;
    // beerAvg : 1일 평균 맥주 소비 캔수 
    // excerciseAvg : 1일 평균 걷는 시간(분 단위)
    // totalBeerCal : 총 소모해야할 칼로리량
    // totalExcercise : 맥주 칼로리를 소모하는데 필요한 총 운동 시간
    // extraExcercise : 추가로 필요한 운동 시간
    // excercisePerDay : 1일 평균 운동 시간
    printf("1일 평균 맥주 소비 캔수: ");
    scanf("%f", &beerAvg);
    printf("1일 평균 걷는 시간(분 단위): ");
    scanf("%f", &excerciseAvg); 
    totalBeerCal = beerCal * year * beerAvg;
    totalExcercise = totalBeerCal / calPerMin;
    extraExcercise = (totalBeerCal - (excerciseAvg * calPerMin * year)) / calPerMin; // (전체소모칼로리량 - 현재소모칼로리량)/1분에 소모하는 칼로리량
    excercisePerDay = totalExcercise / year;
    printf("맥주 칼로리를 소모하는데 필요한 총 운동 시간: %.2f분 (%d시간 %d분 %d초) \n", totalExcercise, ((int)totalExcercise/60),((int)totalExcercise % 60),((totalExcercise-(int)totalExcercise)*60));
    printf("추가로 필요한 운동 시간: %.2f분 (%d시간 %d분 %d초) \n", extraExcercise, ((int)extraExcercise/60),((int)extraExcercise % 60),((extraExcercise - (int)extraExcercise)*60));
    printf("1일 평균 운동 시간: %.2f분 (%d시간 %d분 %d초) \n",excercisePerDay,((int)excercisePerDay/60),((int)excercisePerDay % 60),((extraExcercise - (int)extraExcercise)*60));

    return 0;
}