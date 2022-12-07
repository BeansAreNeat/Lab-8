#pragma once
#include <iostream>
#include <ctime> 
#define SIZE 5

class InsertionSort {
private:
	int current, arr[SIZE];

	void fillArray() {
		srand(time(0)+2);
		for (int i = 0; i < SIZE; i++) {
			arr[i] = (rand() % 1000);
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
	InsertionSort() { }
	~InsertionSort() { }

	void sort() {
		fillArray();

		for (int i = 1; i < SIZE; i++) {
			int current = arr[i];
			int j = i - 1;

			while (current < arr[j] && j>=0) {
				arr[j + 1] = arr[j];
				j--;
			}
			arr[j + 1] = current;
		}

		display();
	}
};