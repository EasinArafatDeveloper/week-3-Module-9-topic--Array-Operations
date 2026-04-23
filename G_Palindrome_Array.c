#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    int i = 0, j = n - 1;
    int p = 0;
        while (i < j)
        {
            if (arr[i] != arr[j])
            {
                p = 1;
                break;
            }else{
                p = 0;
            }
            i++;
            j--;
        }
    if (p == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}