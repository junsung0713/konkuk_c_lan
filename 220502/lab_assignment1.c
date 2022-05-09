#include<stdio.h>
#include<math.h>
float dist(a, b, c, d){
    float distance;
    distance = sqrt(pow(((float)a-c),2.0) + pow(((float)b-d), 2.0));
    return distance;
}

int main(void){
    char start;
    int a, b, c, d;
    float distance;
    do {
        printf("첫 번째 점의 좌표를 입력하시오: ");
        scanf("%d %d",&a, &b);
        printf("두 번째 점의 좌표를 입력하시오: ");
        scanf("%d %d",&c, &d);
        distance = dist(a,b,c,d);
        printf("두 점 사이의 거리는 %.06f 입니다. \n", distance);
        printf("다시 수행하시겠습니까? (y/n): ");
        scanf("%s", &start);
    } while (start != 'n');
    return 0;
}
