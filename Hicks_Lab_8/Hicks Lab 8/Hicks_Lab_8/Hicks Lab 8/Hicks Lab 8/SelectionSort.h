#pragma once
#include <iostream>
#define SIZE 5

class SelectionSort {
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

	int minInteger(int curr) {
		int min = curr;
		for (int i = curr + 1; i < SIZE; i++) {
			if (arr[i] < arr[min]) {
				min = i;
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

public:
	SelectionSort() { }
	~SelectionSort() { }

	void sort() {
		fillArray();
		for (current = 0; current < (SIZE - 1); current++) {
			int low = minInteger(current);
			swap(arr[low], arr[current]);
		} std::cout << std::endl;
		display();
	}
};