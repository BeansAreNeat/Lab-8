#pragma once
#include <iostream>
#define SIZE 5

class SelectionSort {
private:
	int current, arr[SIZE];

public:
	SelectionSort() { }
	~SelectionSort() { }

	void fillArray() {
		for (int i = 0; i < SIZE; i++) {
			std::cin >> arr[i];
		}
		// Sets current to first index
		current = arr[0];
	}

	int minInteger() {
		int min = arr[0];
		for (int i = 0; i < SIZE; i++) {
			// Test if current is > than the pos
			// If so, set them equal
			if (min > arr[i]) {
				min = arr[i];
			}
		}
		return min;
	}

	void swap(int& x, int& y) {
		int temp;
		temp = x;
		x = y;
		y = temp;
	}

	void sort() {
		for (int i = 0; i < SIZE; i++) {
			int smallestNum = minInteger();
			//swap(arr[current], arr[smallestNum]);

			int temp = arr[current];
			arr[current] = arr[smallestNum];
			arr[smallestNum] = temp;

		} std::cout << std::endl;

		for (int i = 0; i < SIZE; i++)
			std::cout << arr[i] << " ";
	}
};