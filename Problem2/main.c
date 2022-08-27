// C Program to find the largest element in an array

#include <stdio.h>


// Method One
int getLargest(int arr[], int n) {
    int element = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i + 1] > element) {
            element = arr[i + 1];
        }
    }
    return element;
}


int main () {
    int arr[] = {1, 5, 62, 265941294 ,2365, 26, 58, 65, 4589};
    
    int sizeOfArray = (sizeof(arr) / sizeof(arr[0]));
    int max = arr[sizeOfArray - 1];
    int largestElement = getLargest(arr, sizeOfArray);

    printf("The largest element in arr is : %d.\n", largestElement);
}