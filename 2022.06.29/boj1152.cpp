//2022.06.29
//앞에 공백 있을 때와
//뒤에 공백이 있을 때를 고려해줘야함
// 그것을 안해줘서 계속 틀렸던 것
// 문제를 잘 볼 것
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	char s[1000000];
	int count = 0;
	scanf("%[^\n]", s);
	int len = strlen(s);

	if (s[len - 1] != ' ') {
		count++;
	}
	for (int i = 1; i < len; i++) {

		if (s[i] == ' ' && (s[i + 1] != ' ' || s[i - 1] != ' ')) {
			count++;
		}
	}
	printf("%d", count);
}