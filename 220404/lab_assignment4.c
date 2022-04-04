#include <stdio.h>

int main(void){
    char a;
    printf("Enter a single character: ");
    scanf("%c", &a);
    if( a >= 'a' & a <='z' ){
        printf("%c -> Capital Letter: %c \n", a, (a + 'A' - 'a'));
    } else if ( a >= 'A' & a <= 'Z'){
        printf("%c -> Ascii Code: %d \n", a, a);
    } else {
        printf("%d -> 알파벳이 아닙니다.", a);
    }
    return 0;
}