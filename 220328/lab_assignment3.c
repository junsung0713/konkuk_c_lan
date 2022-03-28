#include <stdio.h>
#include <math.h>
int main(void){
    int a, b, c;
    float result1, result2;
    printf("Enter a, b and c for a quadratic equation ax^2 + bx + c = 0:\n");
    scanf("%d %d %d",&a,&b,&c);
    result1 = (-b + sqrt(pow(b,2)-(4*a*c)))/ (2*a);
    result2 = (-b - sqrt(pow(b,2)-(4*a*c)))/ (2*a);
    printf("The answer is <%.2f, %.2f> \n", result1, result2);
    return 0;
}