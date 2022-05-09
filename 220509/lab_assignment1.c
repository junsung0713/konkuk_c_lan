#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_dice_face() {
static int one, two, three, four, five, six;
int random = rand() % 6;
switch (random) {
case 0: one++; break;
case 1: two++; break;
case 2: three++; break;
case 3: four++; break;
case 4: five++; break;
case 5: six++; break;
}
printf("현재 주사위 면: %d\n", random + 1);
printf("면 별 나온 횟수:\n");
printf("1: %d, 2: %d, 3: %d, 4: %d, 5: %d, 6: %d\n", one, two, three, four, five, six);
}

int main( void )
{
srand(time(NULL));
int i;
printf("주사위 던지기를 시작합니다. \n");
for (i = 0; i < 50; i++) {
get_dice_face();
}
return 0;
}