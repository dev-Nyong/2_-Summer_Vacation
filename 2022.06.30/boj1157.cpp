//2022.06.30

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	char s[1000000];
	int max = 0;
	int count = 0;
	int maxidx;
	scanf("%s", s);
	int alph[26];
	for (int i = 0; i < 26; i++) {
		alph[i] = 0;
		//초기화
	}
	int len = strlen(s);
	for (int j = 0; j < len; j++) {
		int letter = s[j];
		if (letter >= 'A' && letter <= 'Z') {
			//대문자일 때
			alph[letter - 65] += 1;
		}
		else if (letter >= 'a' && letter <= 'z') {
			alph[letter - 97] += 1;
		}
	}
	for (int i = 0; i < 26; i++) {

		if (alph[i] != 0) {
			if (max == alph[i]) {
				count += 1;
			}
			if (max < alph[i]) {
				max = alph[i];
				maxidx = i;
				count = 0;
			}	
		}
	}
	if (count != 0) {
		printf("?");
	}
	else if (count == 0) {
		printf("%c", maxidx + 65);
	}
	

}