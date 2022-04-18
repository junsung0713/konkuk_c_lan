#include <stdio.h>

    int fibo(int n){
        if(n <=1){
            return n;
        }
        return fibo(n-1) + fibo(n-2);
    }


int main(void){
    int num1, sum = 1, temp = 0;
    printf("2보다 큰 정수를 입력하세요: ");
    scanf("%d", &num1);
    printf("피보나치 수열 f(%d): \n",num1);
    printf("f(0) = 0, f(1) = 1,");
    for( int i =  2 ; i<= num1; i++ ){
        sum = sum + temp;
        if(i != num1){
            printf("f(%d)=%d ,",i,sum);
        } else {
            printf("f(%d)=%d \n",i,sum);
        }
        temp = sum - temp;
    }



    // printf("%d", fibo(3));
    // printf("%d", fibo(5));
    // printf("%d", fibo(7));

    return 0;
}

