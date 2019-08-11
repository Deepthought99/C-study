#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1, *p2, *p3;
    p1 = calloc(1, sizeof(int));
    p2 = calloc(1, sizeof(int));
    p3 = calloc(1, sizeof(int));

    scanf("%d %d", p1, p2);
    *p3 = *p1 - *p2;
    if (*p3 < 0)
        *p3 = -*p3;

    printf("%d\n", *p3);
}