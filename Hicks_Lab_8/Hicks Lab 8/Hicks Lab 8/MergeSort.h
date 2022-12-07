#pragma once
#include <iostream>
#include <ctime> 
#define SIZE 5

class MergeSort {
private:
	int arr[SIZE];

	void fillArray() {
		srand(time(0)+4);
		for (int i = 0; i < SIZE; i++) {
			arr[i] = (rand() % 1000);
		}
	}

	void display() {
		for (int i = 0; i < SIZE; i++) {
			std::cout << arr[i] << " ";
		} std::cout << std::endl;
	}

    void mergeSort(int left, int right) {
        if (left < right) {
            int midPoint = (left + right) / 2;
            mergeSort(left, midPoint);
            mergeSort(midPoint + 1, right);
            merge(left, midPoint, right);
        }
    }

    void merge(int left, int mid, int right) {
        // Starting index of left subarray
        int i = left;
        // Starting index of right subarray
        int j = mid + 1;
        // Starting index of temp subarray
        int k = left;
        // Size of temp array
        int temp[right + 1];

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp[k] = arr[i];
                i++;
                k++;
            }
            else {
                temp[k] = arr[j];
                j++;
                k++;
            }
        }
        // Copy all elements from left subarray to temp
        while (i <= mid) {
            temp[k] = arr[i];
            i++;
            k++;
        }
        // Copy all elements from right subarray to temp
        while (j <= right) {
            temp[k] = arr[j];
            j++;
            k++;
        }
        for (int l = left; l <= right; l++) {
            arr[l] = temp[l];
        }
    }

public:
	MergeSort() { }
	~MergeSort() { }

	void sort() {
		fillArray();
		mergeSort(0, SIZE-1);
		display();
	}
};
