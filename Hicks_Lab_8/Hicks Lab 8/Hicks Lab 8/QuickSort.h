#pragma once
#include <iostream>
#include <ctime> 
#define SIZE 5

class QuickSort {
private:
	int arr[SIZE];

	void fillArray() {
		srand(time(0)+3);
		for (int i = 0; i < SIZE; i++) {
			arr[i] = (rand() % 1000);
		}
	}

	void display() {
		for (int i = 0; i < SIZE; i++) {
			std::cout << arr[i] << " ";
		} std::cout << std::endl;
	}

	void swap(int* a, int *b) {
		int temp = *a;
		*a = *b;
		*b = temp;
	}

	int partition(int l, int pivot) {
		int low = l - 1;
		int high = pivot - 1;

		for (int j = l; j <= high; j++)
		{
			if (arr[j] <= arr[pivot]) {
				low++;
				swap(&arr[low], &arr[j]);
			}
		}
		swap(&arr[low + 1], &arr[pivot]);
		return low + 1;
	}

	void quickSort(int l, int pivot) {
		if (l < pivot) {
			int new_piovt = partition(l, pivot);
			quickSort(l, new_piovt - 1);
			quickSort(new_piovt + 1, pivot);
		}
	}

public:
	QuickSort() { }
	~QuickSort() { }

	void sort() {
		fillArray();
		quickSort(0, (SIZE - 1));
		display();
	}
};