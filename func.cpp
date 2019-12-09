#include <iostream>
#include <ctime>
void RandomArr(int *arr, int n, int d) {
	std::srand(time(0));
	for (int i = 0; i < n; ++i)
		arr[i] = std::rand() % d;
}
void PrintArr(int *arr, int n) {
	for (int i = 0; i < n; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
void QuickSort(int *A, int l, int r){
	{
		if (l < r)
		{
			int i = l, j = r, x = A[(l + r) / 2];
			while (i <= j){
				while (A[i] < x)
					i++;
				while (A[j] > x)
					j--;
				if (i <= j)
				{
					std::swap(A[i], A[j]);
					i++;
					j--;
				}
			}
			if (i < r) QuickSort(A, i, r);
			if (j > l) QuickSort(A, l, j);
		}
	}
}