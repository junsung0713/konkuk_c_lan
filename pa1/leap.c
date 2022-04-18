#include <stdio.h>
#define weightInc 6.80389 // 몸무게 증가량
#define year 365 //1년 일수
#define beerCal 150 //맥주 칼로린

int main(void){
    short leapYear; //윤년여부 
    int priceAvg; // 평균 맥주 가격
    float beerAvg; // 1일 평균 맥주 소비 캔 수
    float totalDrunk; // 총 맥주 소비 캔
    float totalCal; // 총 맥주 칼로리량
    float totalWeightInc; //몸무게 증가량
    float totalPrice; //총 맥주 소비 지출 액


    printf("1일 평균 맥주 소비 캔 수 : ");
    scanf("%f",&beerAvg);
    printf("평균 맥주 가격 : ");
    scanf("%d",&priceAvg);
    printf("윤년인지 아닌지 선택하시오 (윤년 = 1, 평년 = 0) : ");
    scanf("%d",&leapYear);
    totalDrunk = beerAvg * (year + leapYear);
    totalCal = beerAvg * beerCal * (year + leapYear);
    totalWeightInc = beerAvg * weightInc;
    totalPrice = priceAvg * beerAvg * (year + leapYear);
    printf("총 맥주 소비 캔: %.2f \n",totalDrunk);
    printf("총 맥주 칼로리량: %.2fcals\n", totalCal);
    printf("몸무게 증가량: %.2fkg \n", totalWeightInc);
    printf("총 맥주 소비 지출 액: %.0f원 \n", totalPrice);
    return 0 ;
}

