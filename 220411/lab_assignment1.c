#include <stdio.h>

int main(void){
    int n, sum ;
    int i = 1;
    printf("정수를 입력하세요: ");
    scanf("%d",&n);
    while(i <= n){
        if(i == n){
            printf("%d = ",(i*i + 1));
        } else {
            printf("%d + ",(i*i + 1));
        }
        
        sum += (i*i++ + 1);
        // i++;
    }
    printf("%d \n", sum);
    return 0;
}