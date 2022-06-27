#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int data[5000001];
void swap(int A[], int a, int b)
{
	int temp = A[a];
	A[a] = A[b];
	A[b] = temp;
}
int partition(int A[], int p, int r)
{
	int pivot = A[p];
	int low = p + 1;
	int high = r;

	while (low < high) {
		while (pivot >= A[low] && low <= r) {
			low++;
		}
		while (pivot <= A[high] && high >= (p+1)) {
			high--;
		}
		if (low <= high) {
			swap(A, low, high);
		}

	}
	swap(A, p, high);
	return high;
}



int find(int list[], int left, int right, int order)
{
	if (left < right) {
		int p = partition(list, left, right);
		find(list, left, p - 1, order);
			find(list, p + 1, right, order);
			//for (int i = 0; i < 6; i++) {
				//printf("%d ", list[i]);
			//}
			//printf("\n");
			return list[order - 1];
	}
}
int main(void)
{
	int n, i;
	int order;

	scanf("%d", &n);
	scanf("%d", &order);

	for (i = 0; i < n; i++)
		scanf("%d",&data[i]);

	printf("%d",find(data, 0, n - 1, order));


}
