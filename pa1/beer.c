#include <stdio.h>
#define weightInc 6.80389
#define year 365
#define beerCal 150

int main(void){
    float beerAvg;
    int priceAvg;
    float totalDrunk;
    float totalCal;
    float totalWeightInc;
    float totalPrice;
    // float weightInc;

    printf("1일 평균 맥주 소비 캔 수 : ");
    scanf("%f",&beerAvg);
    printf("평균 맥주 가격:");
    scanf("%d",&priceAvg);
    totalDrunk = beerAvg * year;
    totalCal = beerAvg * beerCal * year;
    totalWeightInc = beerAvg * weightInc;
    totalPrice = priceAvg * beerAvg * year;
    // printf("%f",beerAvg);
    // printf("%d",priceAvg);
    printf("총 맥주 소비 캔: %.2f \n",totalDrunk);
    printf("총 맥주 칼로리량: %.2fcals\n", totalCal);
    printf("몸무게 증가량: %.2fkg \n", totalWeightInc);
    printf("총 맥주 소비 지출 액: %.0f원 \n", totalPrice);
    return 0 ;
}

