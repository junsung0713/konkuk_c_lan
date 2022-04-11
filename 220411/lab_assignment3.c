
#include <stdio.h>

int main(void){
int num1, tmp; 
scanf("%d",&num1);
while (num1 != 0)
{  
    tmp = num1 % 10;
    printf("%d",tmp);
    num1 = num1 / 10;
}
printf("\n");
return 0;
}


