//2022.06.29
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int main(void) {
	char s[100];
	int result[26];
	scanf("%s", s);
	for (int j = 0; j < 26; j++) {
		result[j] = -1;
	}
	for (int i = 0; i < strlen(s); i++) {
		int a = s[i];
		if (s[i] >= 97 && s[i] <= 122) {
			if (result[a - 97] != -1) {
				continue;
			}
			result[a - 97] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", result[i]);
	}
}
