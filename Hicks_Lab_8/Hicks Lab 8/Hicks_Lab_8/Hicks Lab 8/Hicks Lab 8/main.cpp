#include <iostream>
#include "SelectionSort.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"

int main() {
	SelectionSort selection;
	BubbleSort bubble;
	InsertionSort insertion;
	MergeSort merge;
	QuickSort quick;

	

	std::cout << "Merge Sort: " << std::endl;
	merge.sort();
	merge.~MergeSort();
	std::cout << std::endl;

	std::cout << "Selection Sort: " << std::endl;
	selection.sort();
	selection.~SelectionSort();
	std::cout << std::endl;

	std::cout << "Bubble Sort: " << std::endl;
	bubble.sort();
	bubble.~BubbleSort();
	std::cout << std::endl;

	std::cout << "Insertion Sort: " << std::endl;
	insertion.sort();
	insertion.~InsertionSort();
	std::cout << std::endl;



	std::cout << "Quick Sort: " << std::endl;
	quick.sort();
	quick.~QuickSort();
	std::cout << std::endl;
}