#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int reverse(int n) {
	//거꾸로 만들어주는 함수
	//123
	int re = 0;
	int pivot = 100;
	while (n > 0) {
		re += (n % 10) * pivot;
		n = n / 10;
		pivot /= 10;
	}
	return re;
}
int main(void) {
	int s;
	int max = 0;
	for (int i = 0; i < 2; i++) {
		scanf("%d", &s);
		if (max < reverse(s)) {
			max = reverse(s);
		}
	}
	printf("%d", max);


}