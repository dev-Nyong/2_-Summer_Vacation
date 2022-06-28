#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int solution(int n) {
	int count = 0;

	while (n) {
		n = n / 10;
		count++;
		if (n == 0) {
			break;
		}
	}
	return count;
}
int main(void) {
	int n;
	int k;
	int l = 1;
	int count = 0;
	scanf("%d", &n);
	scanf("%d", &k);
	int arr[100000] = { 0 };
	for (int i = 1; i <= n; i++) {
		int j = i;
		if (i >= 10) {
			count = solution(i);
			while (count > 0) {
				if (j < 10) {
					arr[l] = j;
					l++;
					count--;
				}
				else {
					arr[l] = j / 10;
					j = j % 10;
					l++;
					count--;
				}
			}
		}
		else {
			arr[l] = j;
			l++;
		}
	}
	printf("%d", arr[k]);
}