//
// Created by elper on 10/8/2026.
//

#include "swap.h"


void swap(int *a, int *b) {
    // What this will do is it will take pointers to two integers, and swap their respective values
    const int temp = *a;
    *a = *b;
    *b = temp;
}



// end is the size of an object divided by the size of the whole array

size_t min_index(const int *arr, size_t start, size_t end) {

    // We make the min the start index by default
    size_t min = start;

    // end is simply the last indexable element
    for (size_t i = start; i < end; i++) {
        // If the element at i is less than the element at min, we swap i and j
        if (arr[i] < arr[min]) min = i;
    }

    // Return the index of the minimum element
    return min;
}


int selection_sort(int *arr, size_t n) {
    // If the size of the array is less than 2, we simply return the first element
    if (n < 2) return arr[0];
    // This will go from the beginning to the last element in the list

    // We do n - 1 since we have a wrap around risk with size_t
    // For example, if n is 0 and we subtract 1, we would get an absurd number as n
    for (size_t i = 0; i < n-1; i++) {

        // We pass in i as the start, and n as the end.

        // For all iterations, n will always be the length, i will change
        size_t min = min_index(arr, i, n);


        swap(&arr[min], &arr[i]);
    }

    return arr[0];
}

