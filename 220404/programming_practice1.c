#include<stdio.h>
int main(void)
{
int x, y;
printf("2개의정수를입력하시오:");
scanf("%d %d", &x, &y);
if( x == 0 ){
    if( y == 0 ){
        printf("두수모두 0입니다");
    } else {
        printf("둘중에서하나는 0입니다");
    }

} else if( y == 0 ) {
    printf("둘중에서하나는 0입니다");
} 
return 0;
}