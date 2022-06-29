//2022.06.29

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	char s[15];
	int a[26];
	int k = 2;
	int sum = 0;

	scanf("%s", &s);
	int len = strlen(s);
	for (int i = 'A'; i <= 'Z'; i++) {
		for (int j = 0; j < 3; j++) {
			a[i - 65] = k;
			i++;
			if (i == 'S' || i=='Z') {
				a[i - 65] = k;
				i++;
			}
		}
		k++;
		i--;
		
	}
	for (int i = 0; i < len; i++) {
		sum += a[s[i]-65] + 1;
	}
	printf("%d", sum);



}