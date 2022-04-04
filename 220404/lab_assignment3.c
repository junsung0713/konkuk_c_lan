#include <stdio.h>
#define avgWage 8350
#define avgWorkingTime 30
#define overWorkingTimeWage 1.2 
#define under10 0.03
#define over10 0.05

int main(void){
    int workTime, overWorkTime, basicWage, overWage;
    float totalWage, tax;
    printf("근무 시간을 입력하시오(시간단위): ");
    scanf("%d", &workTime);
    if(workTime > 30){
        overWorkTime = workTime - avgWorkingTime;
        basicWage = avgWage * avgWorkingTime;
        overWage = overWorkTime * avgWage * overWorkingTimeWage;
        totalWage = basicWage + overWage;
        tax = totalWage * over10;
        printf("기본 주급: %d \n", basicWage);
        printf("초과 수당: %d 시간, %d 원 \n", overWorkTime, (overWage));
        printf("주당 총 임금: %0.f원 \n",  (totalWage));
        printf("주급이 10만원 초과로 5세율 적용, 세액: %d원 \n",(int)(tax + 0.5));
        printf("실 수령액: %d원 \n", (int)(totalWage - tax + 0.5));
    }
    else{
        totalWage = avgWage * workTime;
        printf("주당 총 임금: %.0f원 \n", totalWage);
        if(totalWage > 100000){
            tax = totalWage * over10;
            printf("주급이 10만원 초과로 5세율 적용, 세액: %.0f원 \n",(tax));
            printf("실 수령액: %d원 \n", (int)(totalWage - tax + 0.5));
        } else {
            tax = totalWage * under10;
            printf("주급이 10만원 이하로 3세율 적용, 세액: %.0f원 \n",(tax));
            printf("실 수령액: %d원 \n", (int)(totalWage - tax + 0.5));
        }
    }
    return 0;
}