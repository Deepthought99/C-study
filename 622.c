#include <stdio.h>

int main()
{
    int value[5], *pointer = value;

    for (int i = 0; i < 5; i++)
        scanf("%d", pointer + i);

    for (int i = 0; i < 5; i += 2)
        printf("%d ", *(pointer + i));
    printf("\n");
}