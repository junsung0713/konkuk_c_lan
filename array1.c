#include<stdio.h>

int main(void){
    int i, scores[100], score=0, sum=0, avg=0, count=0;
    for(i=0;i<100;i++){
        scanf("%d",&score);
        if(score < 0){
            break;
        }
        scores[i] = score;
        printf("scores[%d]is : %d \n",score, score);
        count++;
    }
    for(i=0;i<count; i++){
        sum += scores[i];
    }
    avg = sum/count;
    printf("총합은 %d 입니다. \n", sum);
    printf("평균은 %d 입니다. \n", avg);
    return 0 ;
}