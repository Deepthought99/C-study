#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    double *value, *pointer, sum = 0;

    scanf("%d", &size);
    value = (double *)calloc(size, sizeof(double));

    for (int i = 0; i < size; i++)
    {
        scanf("%lf", value + i);
        printf("%0.2lf ", *(value + i));
        sum += *(value + i);
    }
    printf("\n");
    printf("hap : %0.2lf\n", sum);
    printf("avg : %0.2lf\n", sum / size);
}