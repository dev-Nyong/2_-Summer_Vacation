//2022.06.29
//�տ� ���� ���� ����
//�ڿ� ������ ���� ���� ����������
// �װ��� �����༭ ��� Ʋ�ȴ� ��
// ������ �� �� ��
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