# Python program for implementation of MergeSort
# author : Ahzam Akhtar
# Date Modified : 2 October , 2022
def mergeSort(arr):
    if len(arr) > 1:
 
         # Finding the midle of the array
        mid = len(arr)//2
 
        # Dividing the array elements
        # first half
        Left = arr[:mid]
 
        # into second half
        Right = arr[mid:]
 
        # Sorting the first half
        mergeSort(Left)
 
        # Sorting the second half
        mergeSort(Right)
 
        i = 0
        j = 0
        k = 0
 
        # Copy data to temp arrays Left array and Right array
        while i < len(Left) and j < len(Right):
            if Left[i] <= Right[j]:
                arr[k] = Left[i]
                i += 1
            else:
                arr[k] = Right[j]
                j += 1
            k += 1
 
        # Checking if any element was left
        while i < len(Left):
            arr[k] = Left[i]
            i += 1
            k += 1
 
        while j < len(Right):
            arr[k] = Right[j]
            j += 1
            k += 1
 
# Code to print the list
 
def printList(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()
 
 
array = [10, 2, 19, 58, 67, 3]
print("The Given array is", end="\n")
printList(array)
mergeSort(array)
print("The Sorted array is: ", end="\n")
printList(array)
 
