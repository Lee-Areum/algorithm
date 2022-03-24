#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void swap(int* n1, int* n2) {
	int tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

void print(int* A, int num) {
	for (int i = 0; i < num; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}

void InsertionSort(int* A, int n) {
	int left = 0;
	for (int i = 1; i < n;i++) {
		left = A[i];
		int j = i - 1;
		while (j >= 0 && A[j] > left) {
			A[j + 1] = A[j];
			j = j - 1;
		}
		A[j + 1] = left;
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
//  print(numbers,num);
//	start = clock();
//	QuickSort(numbers, num);
//	end = clock();
//  print(numbers,num);
//	printf("\nÃÑ ¼Ò¿ä½Ã°£ : %.3f\n", (float)(end - start) / CLOCKS_PER_SEC);
//	system("pause");
//	return 0;
//}