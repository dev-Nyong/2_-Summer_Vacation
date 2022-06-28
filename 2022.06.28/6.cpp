#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void encryption(char* a, char* e) {
	char sentance[30];
	char encoded_sentance[30];
	int j;
	int idx;

	scanf(" %[^\n]", sentance);

	for (j = 0; j < strlen(sentance); j++) {
		for (int i = 0; i <= 25; i++) {
			if (sentance[j] == ' ') {
				encoded_sentance[j] = ' ';
				break;
			}
			if (sentance[j] == a[i]) {
				idx = i;
				encoded_sentance[j] = e[idx];
				break;
			}
		}
	}
	encoded_sentance[j] = '\0';
	printf("%s", encoded_sentance);
}
int main(void) {
	int n;
	char alphabet[30];
	char encoded[30];

	for (int i = 'A'; i <= 'Z'; i++) {
		alphabet[i - 65] = i;
		if (i == 'Z') {
			alphabet[i - 65 + 1] = '\0';
		}
	}
	int j = 0;
	int i;
	int p = 0;
	for (i = 'Z'; i >= 'A'; i--) {
		encoded[p] = i;
		p++;
	}
	encryption(alphabet, encoded);

}