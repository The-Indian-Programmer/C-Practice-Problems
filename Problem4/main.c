// Given an array A[] and a number x, check for pair in A[] with sum as x (aka Two Sum).

#include <stdio.h>

void getElementPosition(int arr[], int size, int x)
{
    int firstElement, secondElement;
    int condition = 0;
    for (int i = 0; i < size; i++)
    {
        
        for (int j = i + 1; j < size; j++)
        {
            if (condition == 0)
            {
                int count = arr[i] + arr[j];
                if (count == x)
                {
                    firstElement = arr[i];
                    secondElement = arr[j];
                    condition = 1;
                }
            }
        }
    }
    printf("The first element is %d and  second element is %d.\n", firstElement, secondElement);
}

int main()
{
    int arr[] = {1, 5, 3, 1, 4, 8, 6, 98, 2, 5, 5, 6, 5856, 26, 562, 58, 33, 58};
    int sizeOfArr = (sizeof(arr) / sizeof(arr[0]));
    int x = 25;
    getElementPosition(arr, sizeOfArr, x);
    return 0;
}