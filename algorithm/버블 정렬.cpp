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

void BubbleSort(int* A, int num) {
	for (int i = 0; i < num-1; i++) {
		for (int k = 1; k < (num - i); k++) {
			if (A[k - 1] > A[k]) {
				swap(&A[k - 1], &A[k]);
			}
		}
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
	BubbleSort(numbers, num);
	end = clock();
	printf("\nÃÑ ¼Ò¿ä½Ã°£ : %.3f\n", (float)(end - start) / CLOCKS_PER_SEC);
	system("pause");
	return 0;
}