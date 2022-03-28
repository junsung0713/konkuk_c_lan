#include <stdio.h>
#define GRAVITY 9.8

int main(void){
    int m, v, h;
    float kineticEnergy, potentialEnergy, mechanicalEnergy;
    printf("물체의 질량 m (kg), 속도 v (m/s) 및 높이 h (m)를 입력하시오: ");
    scanf("%d %d %d",&m, &v, &h);
    kineticEnergy = ( 1 / (float)2 ) * m * v * v;
    potentialEnergy = m * h * GRAVITY;
    mechanicalEnergy = kineticEnergy + potentialEnergy;
    printf("운동에너지:%10.2f [J],\n", kineticEnergy);
    printf("위치에너지:%10.2f [J],\n",potentialEnergy);
    printf("역학에너지:%10.2f [J]\n",mechanicalEnergy);
    return 0;
}