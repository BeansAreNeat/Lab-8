#include "MergeSort.h"

MergeSort::MergeSort(int arr[], int left, int right) {
    if (left < right) {
        int midPoint = (left + right) / 2;
        MergeSort(arr, left, midPoint);
        MergeSort(arr, midPoint + 1, right);
        merge(arr, left, midPoint, right);
    }
}

void MergeSort::merge(int arr[], int left, int mid, int right) {
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
