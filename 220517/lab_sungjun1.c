#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#define WORDSIZE 6

int main() {
	char words[WORDSIZE];
	char input[WORDSIZE];
	int	i;
	char temper[WORDSIZE];
	srand((unsigned)time(NULL));
	do {
		system("cls");
		for (i = 0; i < 5; i++)
			words[i] = 'a' + (rand() % 26);
		words[i] = '\0';
		printf("%s\n", words);
		Sleep(2000);
		system("cls");
		printf("글자를 입력하세요: ");
		
		gets_s(input, WORDSIZE);
		
		if (!strcmp(input, words))
			printf("정답입니다!\n");
		else
			printf("안타깝네요~ \n");

		printf("다시 수행하시겠습니까?");
		gets_s(temper, WORDSIZE);
	} while (temper[0] == 'y' || temper[0] == 'Y');
	return 0;
}
