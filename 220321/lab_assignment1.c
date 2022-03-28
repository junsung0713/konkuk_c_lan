#include <stdio.h>

int main(void){
    double formula1;
    formula1 = ( 3.32e-3 + 9.76e-8 )/( 9.12e6 + 1.87e9 );
    printf("%e \n",formula1);
    return 0;
}