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
		int p, l = left; int r = right;
		int pivot = A[(left+right)/2];
		while (l < r) {
			while (A[l] < pivot) { l+=1; }
			while (A[r] > pivot) { r-=1;}
			if (A[l] == A[r]) {
				r--; l++;
			}
			if (l >= r) {
				break;
			}
			swap(&A[r], &A[l]);

		}
		for (p = left; p < right && A[p] != pivot; p++);
		QuickSort(A, left, p - 1);
		QuickSort(A, p + 1, right);
	}
}

//int main() {
//	clock_t start, end;
//	int num = 0;
//	int numbers[1000000] = { 0, };
//	scanf_s("%d", &num);
//	for (int i = 0; i < num; i++) {
//		int tmp = rand() % 100 + 1;
//		numbers[i] = tmp;
//	}
//	start = clock();
//	QuickSort(numbers, 0, num-1);
//	end = clock();
//	printf("\n?? ?ҿ??ð? : %.3f\n", (float)(end - start) / CLOCKS_PER_SEC);
//	system("pause");
//	return 0;
//}