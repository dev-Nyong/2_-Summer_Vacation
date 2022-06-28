#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main(void) {
	int n;
	int count = 0;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i >= 10) {
			int j = i;
			while (j > 0) {
				j = j / 10;
				count++;
			}
		}
		else {
			count++;
		}
	}
	printf("%d", count);
}