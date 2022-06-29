//2022.06.29
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	int n;
	scanf("%d", &n);//테스트케이스
	int* k = (int*)malloc(sizeof(int) * n);
	char** s;
	s = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		s[i] = (char*)malloc(sizeof(char) * 20 * n);
	}
	int* len = (int*)malloc(sizeof(int) * n);
	for (int l = 0; l < n; l++) {
		scanf("%d", &k[l]);//반복할 횟수
		scanf("%s", s[l]);
		len[l] = strlen(s[l]);
	}
	for (int p = 0; p < n; p++) {
		for (int i = 0; i < len[p]; i++) {
			for (int j = 0; j < k[p]; j++) {
				printf("%c", s[p][i]);
			}
		}
		printf("\n");
	}
}