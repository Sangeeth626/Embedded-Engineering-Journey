// 1. malloc()

/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = malloc(5 * sizeof *p);

    if (p == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }

    free(p);
    p = NULL;

    return 0;
}*/



