#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define WORDSIZE 101

int main() {
	char alpabet[WORDSIZE];
	int alphabetNum[26] = {0};
	int i;
	printf("Enter string :\n");
	gets_s(alpabet, WORDSIZE);
	i = 0;
	while (alpabet[i] != '\0') {
		if (alpabet[i] != ' ') {
			alphabetNum[alpabet[i] - 'a']++;
		}
		i += 1;
	}
	for (i = 0; i < 26; i++) {
		printf("%c: %d ", i + 65, alphabetNum[i]);
		if (i == 12)
			printf("\n");
	}
	return 0;
}
