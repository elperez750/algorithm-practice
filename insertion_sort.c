#include "insertion_sort.h"
// This is a comment

void insertion_sort(int arr[], size_t n) {

    // Size_t is the size of the array n
    // We start at 1


    //int data[] = {5, 2, 9, 1, 7, 3};

    for (size_t i = 1; i < n; i++) {
        // We make the number at i the key
        int key = arr[i];

        // This will be i, which is the index
        size_t j = i;
        // We will just loop backwards until we reach the beginning which is j == 0
        // For each iteration, we will add one more operation, since i moves forward and we set j = i

        while (j > 0 && arr[j - 1] > key) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = key;
    }
}