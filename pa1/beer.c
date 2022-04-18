#include <stdio.h>
#define weightInc 6.80389 //몸무게 증가량
#define year 365 // 1년에 대한 일수
#define beerCal 150 // 맥주 칼로리

int main(void){
    float beerAvg; // 1일 평균 맥주 소비 캔 수
    int priceAvg; // 평균 맥주 가격
    float totalDrunk; // 총 맥주 소비 캔
    float totalCal; // 총 맥주 칼로리량
    float totalWeightInc; //몸무게 증가량
    float totalPrice; //총 맥주 소비 지출 액

    printf("1일 평균 맥주 소비 캔 수 : ");
    scanf("%f",&beerAvg);
    printf("평균 맥주 가격:");
    scanf("%d",&priceAvg);
    totalDrunk = beerAvg * year;
    totalCal = beerAvg * beerCal * year;
    totalWeightInc = beerAvg * weightInc;
    totalPrice = priceAvg * beerAvg * year;
    printf("총 맥주 소비 캔: %.2f \n",totalDrunk);
    printf("총 맥주 칼로리량: %.2fcals\n", totalCal);
    printf("몸무게 증가량: %.2fkg \n", totalWeightInc);
    printf("총 맥주 소비 지출 액: %.0f원 \n", totalPrice);
    return 0 ;
}

