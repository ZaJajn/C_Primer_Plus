#include <stdio.h>
int main(void)
{
    int n = 0;
    printf("Input a string :\n");
    while (getchar() != '\n')
    {
        n++;
    }
    printf("%d\n",n);
    return 0;
}
