#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void MergeSort(int *A,int p, int q) {
	if (p < q) {
		int k = (p + q) / 2;
		MergeSort(A,p,k);
		MergeSort(A, k + 1, q);

		int left, right,n=0;
		left = p; right = k+1;
		int tmp[1000000] = { 0, };
		while (left <= k && right <= q) {
			if (A[left] < A[right]) {
				tmp[n++] = A[left++];
			}
			else {
				tmp[n++] = A[right++];
			}
		}
		while (right <= q) {
			tmp[n++] = A[right++];
		}
		while (left <= k) {
			tmp[n++] = A[left++];
		}
		for (int i = 0; i < n; i++) {
			A[p + i] = tmp[i];
		}
	}
}
/*
int main() {
	clock_t start, end;
	int numbers[1000000] = { 0, };
	int num = 0;
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) {
		int tmp = rand() % 100 + 1;
		numbers[i] = tmp;
	}
	start = clock();
	MergeSort(numbers, 0, num-1);
	end = clock();
	printf("ÃÑ ¼Ò¿ä½Ã°£ : %.3f\n", (float)(end - start) / CLOCKS_PER_SEC);
	system("pause");
	return 0;
}*/