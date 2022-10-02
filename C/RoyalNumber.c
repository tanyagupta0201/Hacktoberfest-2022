#include <stdio.h>
int main()
{
    int n, num[100], i, min,count = 0;
    printf("Enter the total numbers you want : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) // Taking Numbers as a Input
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0 && num[i] % 3 == 0 && num[i] % 5 == 0)
        {
            count++; 
            min = num[i];
            if (num[i] < min) // Checking for Minimum Value
            {
                min = num[i];
            }
        }
    }
    if(count == 0)
    {
        printf("No");
    }
    else
    {
        printf("%d", min);
    }    
    return 0;
}