#pragma once
#include <iostream>
#define SIZE 5

class MergeSort {
private:
	int current, arr[SIZE];

	void fillArray() {
		for (int i = 0; i < SIZE; i++) {
			std::cin >> arr[i];
		}
	}

	void display() {
		for (int i = 0; i < SIZE; i++) {
			std::cout << arr[i] << " ";
		} std::cout << std::endl;
	}

	void swap(int& x, int& y) {
		int temp;
		temp = x;
		x = y;
		y = temp;
	}

	void merge(int l, int const m, int r) {
		int i, j, k;
		int l[m];
	}

	void mergeSort(int l, int r) {
		if (l < r) {
			int mid = (l + r) / 2;
			mergeSort(l, mid);
			mergeSort(mid+1, r);
			merge(l, mid, r);

		}
	}

public:
	MergeSort() { }
	~MergeSort() { }

	void sort() {
		fillArray();
		mergeSort(0, SIZE-);
		display();
	}
};
