#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void) {
	//s�� ���̴� 1 �̻� 1000 �̸��̴ϱ� �迭ũ�⸦ 1000���� �д�.
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