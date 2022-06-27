//숫자의 합
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a;
	char b[100];
	int sum = 0;
	scanf("%d", &a);
	scanf("%s", &b);
	for (int i = 0; i < a; i++) {
		sum += b[i]-'0';
	}
	printf("%d", sum);
}