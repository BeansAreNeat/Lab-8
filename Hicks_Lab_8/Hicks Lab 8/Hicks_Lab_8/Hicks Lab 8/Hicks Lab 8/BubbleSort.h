#pragma once
#include <iostream>
#define SIZE 5

class BubbleSort {
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

public:
	BubbleSort() { }
	~BubbleSort() { }

	void sort() {
		fillArray();
		for (int current = 0; current < (SIZE - 1); current++) {
			for (int i = current + 1; i < SIZE; i++) {
				if (arr[i] < arr[current]) {
					swap(arr[current], arr[i]);
				}
			}
		} std::cout << std::endl;
		display();
	}
};