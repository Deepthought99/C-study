#include <stdio.h>

int main()
{
    int value;
    int *pointer = &value;

    scanf("%d", pointer);
    printf("%#p %d\n", pointer, value);
}