#include "my.h"
#include "fib_iter.c"
#include "fib.c"
int main(void) {
int n;
time_t t1, t2;
printf("정수 입력하세요: ");
scanf("%d",&n);
t1 = time(NULL);
printf("피보나치수: %ld\n", fib_iter(n));
t2 = time(NULL);
printf("반복문 시간: %d\n", t2-t1);
t1 = time(NULL);
printf("피보나치수: %ld\n", fib(n));
t2 = time(NULL);
printf("재귀 호출 시간 : %d\n", t2-t1);
return 0;
}