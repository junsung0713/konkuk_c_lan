#include <stdio.h>
#define ROWS 6

int main(void) {
int row, row2;
// char ch;
for (row = 1; row<=ROWS; row++){
    for (row2 = 0; row2<row; row2++){
        // printf("%d",row2);
        printf("%c",'F'-row2);
    }
    printf("\n");
}
return 0;
}