#include <stdio.h>

int main()
{
    int value[2], *pointer = value;

    scanf("%d %d", pointer, pointer + 1);
    printf("%d + %d = %d\n", *pointer, *(pointer + 1), *pointer + *(pointer + 1));
    printf("%d - %d = %d\n", *pointer, *(pointer + 1), *pointer - *(pointer + 1));
    printf("%d * %d = %d\n", *pointer, *(pointer + 1), *pointer * *(pointer + 1));
    printf("%d / %d = %d\n", *pointer, *(pointer + 1), *pointer / *(pointer + 1));
}