#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr, tmp;

    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", arr + i);

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    printf("max : %d\n", arr[n - 1]);
    printf("min : %d\n", arr[0]);
}