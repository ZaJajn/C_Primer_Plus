#include <stdio.h>

int main(void)
{
    int row, i, j;

    scanf("%d", &row);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("$");
        }
        printf("\n");
    }

    return 0;
}
