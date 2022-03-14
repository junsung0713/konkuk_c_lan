#include<stdio.h>

int main(void){
    float fahrenheit;
    float celcius;
    printf("\n");
    printf("이름: 박준성\n");
    printf("학번: 202211302\n");
    printf("수행일자: 2022. 3. 14\n");
    printf("\n");
    printf("화씨 온도를 입력하세요: ");
    scanf("%f", &fahrenheit);
    celcius = 5.0 / 9.0 * ( fahrenheit - 32 );
    printf("섭씨 온도는 %.2f도 입니다. \n",celcius);
    printf("\n");
    return 0;
}