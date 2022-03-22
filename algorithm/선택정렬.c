#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void SelectionSort(int* A,int n) {
	for (int i = 0; i < n - 1;i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (A[j] < A[min]) {
				min = j;
			}
			int tmp = A[i];
			A[i] = A[min];
			A[min] = tmp;
		}
	}
}

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
	SelectionSort(numbers, num);
	end = clock();
	printf("ÃÑ ¼Ò¿ä½Ã°£ : %.3f\n", (float)(end - start) / CLOCKS_PER_SEC);
	system("pause");
	return 0;
}