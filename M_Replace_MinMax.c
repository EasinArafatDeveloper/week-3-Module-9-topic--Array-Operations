#include <stdio.h>
#include <limits.h>
int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max_val = INT_MIN, max_idx = -1;
    // printf("%d", max_val);
    int min_val = INT_MAX, min_idx = -1;
    // printf("%d", min_val);

    for (int i = 0; i < n; i++)
    {
        if (max_val < arr[i])
        {
            max_val = arr[i];
            max_idx = i;
        }
        if (arr[i] < min_val)
        {
            min_val = arr[i];
            min_idx = i;
        }
    }

    int temp = arr[min_idx];
    arr[min_idx] = arr[max_idx];
    arr[max_idx] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}