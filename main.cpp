#include "funch.h"
#include <iostream>
const int N = 10;

int main(){
	using namespace std;
	int *arr = new int[N];
	RandomArr(arr, N, 50);
	PrintArr(arr, N);
	QuickSort(arr, 0, N - 1);
	cout << "After sort: " << endl;
	PrintArr(arr, N);
	cin.get();
	delete[] arr;
	return 0;
}