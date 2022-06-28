#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1234 1234/10
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

int main() {
    int n;

    scanf("%d", &n);
    printf("%d\n", solution(n));
    return 0;
}