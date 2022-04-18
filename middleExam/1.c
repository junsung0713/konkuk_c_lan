#include <stdio.h>
#include <math.h>
#define zero 0
#define limit 10000000000
int main(void){
    float nuealbi ;
    int garo,sero;
    printf("넓이를 입력하세요: ");
    scanf("%f", &nuealbi);
    printf("가로 세로 비율을 입력하세요:");
    scanf("%d %d",&garo, &sero);
    if(nuealbi > limit || nuealbi<=zero){
        printf("넓이가 조건에 맞지 않습니다 \n");
    } else{
        if(garo == zero || sero == zero){
            printf("비율이 조건에 맞지 않습니다 \n");
        } else{
            printf("가로 길이: %.2f\n",( garo*sqrt((nuealbi/(garo*sero))) ));
            printf("세로 길이: %.2f\n",( sero*sqrt((nuealbi/(garo*sero))) ));
        }
    }
    return 0;
}