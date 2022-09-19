#include <stdio.h>

int main(void)
{
    int i, j, n;

    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%3d", j);
        }
        printf("\n");
    }
}