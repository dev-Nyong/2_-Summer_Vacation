//2022.06.30
//다른 사람 코드 참고
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	int n;
	int group_num = 0;
	scanf("%d", &n);
	char word[100];

	for (int i = 0; i < n; i++) {
		scanf("%s", word);
		int a[26];
		for (int j = 0; j < 26; j++) {
			a[j] = 0;
		}
		int len = strlen(word);
		for (int p = 0; p < len; p++) {
			int letter = word[p];

			if (a[letter - 'a'] == 0) {
				a[letter - 'a'] = 1;
			}
			else {
				//이미 1이라면
				if (word[p - 1] != word[p]) {
					break;
				}
			}
			if (p == len - 1) {
				group_num++;
			}
		}
	}
	printf("%d\n", group_num);

}