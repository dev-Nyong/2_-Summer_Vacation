#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	int c_alph[8];
	char word[100];
	scanf("%s", word);
	int len = strlen(word);
	int count = len;
	for (int i = 0; i < len; i++) {
		if (word[i] == '=') {
			if (word[i - 1] == 'c' || word[i - 1] == 's' || (word[i - 1] == 'z' && word[i - 2] != 'd')) {
				count--;
			}
			else if (word[i - 1] == 'z' && word[i - 2] == 'd') {
				count -= 2;
			}
		}
		if (word[i] == '-') {
			if (word[i - 1] == 'c' || word[i - 1] == 'd') {
				count--;
			}
		}
		if (word[i] == 'j') {
			if (word[i - 1] == 'l' || word[i - 1] == 'n') {
				count--;
			}
		}
	}
	printf("%d", count);
}