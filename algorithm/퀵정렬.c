#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void swap(int* n1, int* n2) {
	int tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}
void print(int* A,int l,int r) {
	for (int i = l; i <= r; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}

void QuickSort(int* A, int left, int right) {
	if (left < right) {
		int p = left;int l = left; int r = right;
		int pivot = (left+right)/2;
		swap(&A[pivot], &A[left]);
		pivot = left;
		while (l < r) {
			while (A[l] < A[pivot] && l < r) { l++; }
			while (A[r] > A[pivot] && l < r) { r--;}
			swap(&A[r], &A[l]);
		}
		while (A[p] < A[pivot]) p++;
		swap(&A[left],&A[p]);
		QuickSort(A, left, p - 1);
		QuickSort(A, p + 1, right);
	}
}

int main() {
	clock_t start, end;
	int num = 0;
	int numbers[1000000] = { 0, };
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) {
		int tmp = rand() % 100 + 1;
		numbers[i] = tmp;
	}
	start = clock();
	QuickSort(numbers, 0, num-1);
	end = clock();
	printf("\nÃÑ ¼Ò¿ä½Ã°£ : %.3f\n", (float)(end - start) / CLOCKS_PER_SEC);
	system("pause");
	return 0;
}