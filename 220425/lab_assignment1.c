#include<stdio.h>

int main(void){
    char calculation;
    int num1, num2;
    do{
        printf("**********************\n");
        printf("A---Add\n");
        printf("S---Substract\n");
        printf("M---Multiply\n");
        printf("D---Divide\n");
        printf("Q---Quit\n");
        printf("**********************\n");
        printf("연산을 선택하시오:");
        calculation = getchar();
        if(calculation == 'Q'){
            break;
        }
        switch (calculation)
        {
        case 'A':
            printf("두 수를 입력하시오:");
            scanf("%d %d", &num1, &num2);
            printf("%d + %d = %d \n",num1,num2,(num1+num2));
            break;
        case 'S':
            printf("두 수를 입력하시오:");
            scanf("%d %d", &num1, &num2);
            printf("%d - %d = %d \n",num1,num2,(num1-num2));
            break;
        
        case 'M':
            printf("두 수를 입력하시오:");
            scanf("%d %d", &num1, &num2);
            printf("%d * %d = %d \n",num1,num2,(num1*num2));
            break;
        
        case 'D':
            printf("두 수를 입력하시오:");
            scanf("%d %d", &num1, &num2);
            printf("%d / %d = %.2f \n",num1,num2,(num1/(float)num2));
            break;

        default:
            printf("잘못 입력하였습니다.\n");
            break;;
        }
    }while(calculation = getchar() == '\n');
    return 0;
}