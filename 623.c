#include <stdio.h>

int main()
{
    double value[5], *pointer = value;

    for (int i = 0; i < 5; i++)
        scanf("%lf", pointer + i);

    for (int i = 0; i < 5; i++)
        printf("%.1lf ", *(pointer + i));
    printf("\n");
}