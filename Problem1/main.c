// Write a c program to find the sum of elements in a given array.

#include <stdio.h>


// First Method
int sum (int arr[], int n) { // arr is array and n is the size of array
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}


// Second Method
int sumWithRecursion(int arr[], int n) {
    int sum = 0;
    if(n <= 0) return sum;
    else return sumWithRecursion(arr, n - 1) + arr[n - 1];
}
int main () {
    int arr[] = {5, 10, 20, 35, 26, 28, 75, 21};
    int sizeOfArr = (sizeof(arr) / sizeof(arr[0]));

    // int sumOfArray = sum(arr, sizeOfArr);
    // printf("Sum of given array is %d\n.", sumOfArray);

    int sumOfArray = sumWithRecursion(arr, sizeOfArr);
    printf("Sum of given array is %d.\n", sumOfArray);
}