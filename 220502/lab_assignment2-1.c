#include<stdio.h>
#include<windows.h>
#include<conio.h>

void gotoxy(int x, int y) {
	COORD Cur = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

int main() {
	int x = 40, y = 12, ch;
	while (1) {
		gotoxy(x, y);
		printf("*"); // printf("*\b"); 와 비교해 볼 것!
		ch = _getch();
		if (ch == 224) {
			ch = _getch();
			switch (ch) {
			case 72:
				printf("\b ");
				y--;
				break;
			case 80:
				printf("\b ");
				y++;
				break;
			case 75:
				3
				x--;
				break;
			case 77:
				printf("\b ");
				x++;
				break;
			}
		}
	}
}
