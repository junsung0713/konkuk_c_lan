#include <stdio.h>
#define minLimit -2147483647
int main(void){
    int res;
    int max = minLimit;
    printf("정수를 입력하세요:");
    while(scanf("%d",&res) == 1){
        printf("정수를 입력하세요:");
        if(max<res){
            max = res;
        }
    }
    printf("최대 정수값은: %.d \n", max);
    return 0;
}