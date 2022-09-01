// Recursive program to linearly search an element in a given array
// Given an unsorted array and an element x, search x in the given array. Write recursive C code for this. If the element is not present, return -1.

#include <stdio.h>

// Method 1
int getElementPosition(int arr[], int element, int length) {
    int position = -1;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == element) {
            position = i;
            break;
        }
    }
    return position;
}

int main()
{
    int arr[] = {1, 5, 3, 1, 4, 8, 6, 98, 2, 5, 5, 6, 5856, 26, 562, 58, 33, 58};
    int sizeOfArr = (sizeof(arr) / sizeof(arr[0]));
    int x = 2656495;
    int position = getElementPosition(arr, x, sizeOfArr);
    if (position == -1) {
        printf("The given element %d is not present in array.\n", x);
    } else {
        printf("The given element %d is at index %d in array.\n", x, position);
    }
}