#include <stdio.h>
int main(void)
{
    char a;

    printf("Enter the number $___\b\b\b");
    scanf("%d", &a);
    printf("So ASCII %d is %c\n", a, a);

    return 0;
}
