// #include<stdio.h>
// int main(void)
// {
// int x, y;
// printf("2개의정수를입력하시오:");
// scanf("%d %d", &x, &y);
// if( x == 0 & y == 0 ){
//     printf("두수 모두 0입니다 \n");
// } else if ( x != 0 & y == 0 ){
//     printf("x는 0이 아니고, y는 0입니다. \n");
// } else if ( x == 0 & y != 0 ){
//     printf("x는 0이고, y는 0이 아닙니다. \n");
// } else {
//     printf("x, y는 모두 0이 아닙니다. \n");
// }
// return 0;
// }

#include<stdio.h>

int main(void)
{
int x, y;
printf("2개의정수를입력하시오:");
scanf("%d %d", &x, &y);
if( x == 0 ){
    if( y == 0 ){
        printf("두수 모두 0입니다. \n");
    }
    if ( y != 0 ){
        printf("x는 0이고, y는 0이 아닙니다 \n");
    }
}
if( x != 0 ) {
    if( y == 0 ){
        printf("x는 0이 아니고, y는 0입니다.\n");
    }
    if( y == 1){
        printf("x, y는 모두 0이 아닙니다.\n");
    }
}
return 0;
}