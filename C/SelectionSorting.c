//Selection Sort Algorithm
#include <stdio.h>
void selectionSort(int arr[], int size)
{ //this loop is for accessing passes
    for (int i = 0; i < size - 1; i++)
    { //this loop is for comparison
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            //this loop is for swapping
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {7, 4, 9, 42, 31, 6, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    printf("The Sorted Array is : ");
    printArray(arr, size);
    return 0;
}