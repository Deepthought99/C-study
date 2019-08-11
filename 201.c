#include <stdio.h>

int main()
{
    int value, *pointer = &value;

    scanf("%d", pointer);
    for (int i = 0; i < *pointer; i++)
        printf("*");
    printf("\n");
}