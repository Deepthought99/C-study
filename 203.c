#include <stdio.h>

int main()
{
    int value[10], *pointer = value;
    int odd = 0, even = 0;

    for (int i = 0; i < 10; i++, pointer++)
    {
        scanf("%d", pointer);
        if (*pointer % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("odd : %d\n", odd);
    printf("even : %d\n", even);
}