/*
   Author name-Amit singh Bisht
   Date Modified:  01 October, 2022
*/
// Binary search implementation using C

// Implementation
#include <stdio.h>
int binary(int arr[], int n, int ele)
{
    int l = 0;
    int r = n, mid;
    while (l < r)
    {
        mid = (l + r) / 2;
        if (arr[mid] == ele)
        {
            return 1;
        }
        else if (arr[mid] > ele)
        {
            r = mid - 1;
        }
        else
            l = mid;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ele;
    printf("enter the element you want to search \n");
    scanf("%d", &ele);
    int chk = binary(arr, n, ele);
    if (chk == 1)
        printf("found\n");
    else
        printf("Not found\n");
}