// 문자열 합치기
#include <stdio.h>

int main(void){
    int number1[100];
    int cnt = 3; 
    for(int i=0; i<3; i++){
        scanf("%d", &number1[i]);
    }

    int min = 1000000;
    for(int i=0; i<cnt; i++){
        for(int ii=1; ii<cnt; ii++){
            printf("%d",(number1[i]+number1[ii]));
        }        
    }
    return 0;
}