#include <stdio.h>
int main(void)
{
    int guests, x, y;

    printf("\nGive the guests value: ");
    scanf("%d", &guests);
    printf("Sequence point:\n");
    while (guests++ < 10)
        printf("%d \n", guests);
    //crement problem
    printf("\nGive the x value: ");
    scanf("%d", &x);
    y = (4 + x++) + (6 + x++);
    printf("\ny = %d\n\n", y);

    return 0;
}
