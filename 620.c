#include <stdio.h>

int main()
{
    int value, *pointer = &value;

    scanf("%d", pointer);
    printf("%d...%d\n", *pointer / 10, *pointer % 10);
}