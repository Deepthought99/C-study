#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, *value;
    int temp;

    scanf("%d", &size);
    value = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++)
        scanf("%d", value + i);

    for (int i = size - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (value[j] < value[j + 1])
            {
                temp = value[j];
                value[j] = value[j + 1];
                value[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
        printf("%d ", value[i]);
    printf("\n");
}