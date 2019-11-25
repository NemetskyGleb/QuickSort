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
void QuickSort(int *A, int first, int last){
	{
		if (first < last)
		{
			int left = first, right = last, middle = A[(left + right) / 2];
			do
			{
				while (A[left] < middle) left++;
				while (A[right] > middle) right--;
				if (left <= right)
				{
					std::swap(A[left], A[right]);
					left++;
					right--;
				}
			} while (left <= right);
			QuickSort(A, first, right);
			QuickSort(A, left, last);
		}
	}
}