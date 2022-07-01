#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void) {
	//s의 길이는 1 이상 1000 미만이니까 배열크기를 1000으로 둔다.
	char s[1000] = { 0 };
	int a[26];
	int count = 1;
	scanf("%s", s);
	for (int i = 0; i < 26; i++) {
		a[i] = 0;
	}
	for (int i = 1; i < strlen(s); i++) {
		if (s[i - 1] == s[i]) {
			count++;
		}
		if (s[i] != s[i + 1]) {
			if (a[s[i] - 97] < count) {
				a[s[i] - 97] = count;
				count = 1;
				i++;
			}
		}
	}
	int max = 0;
	for (int i = 0; i < 26; i++) {
		if (a[s[i] - 97] != 0) {
			if (max < a[s[i] - 97]) {
				max = a[s[i] - 97];
			}
		}
	}
	printf("%d ", max);


}