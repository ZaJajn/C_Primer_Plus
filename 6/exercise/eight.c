#include <stdio.h>

int main(void)
{
    float a, b;

    printf("Input two numbers: ");
    while(scanf("%f %f", &a, &b) == 2)
    {
        printf("%.5f\n", (a - b) / (a * b));
            printf("Input two numbers: ");
    }
    printf("That's done!\n");

    return 0;
}
