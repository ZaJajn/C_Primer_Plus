#include <stdio.h>
#include <string.h>
#define SIZE 30

int main(void)
{
    char name[SIZE];
    char lastname[SIZE];

    printf("What's you firstname?\n");
    scanf("%s", name);
    printf("What's you lastname?\n");
    scanf("%s", lastname);
    printf("%s %s\n", name, lastname);
    printf("%*zd %*zd", strlen(name), strlen(name), strlen(lastname),
           strlen(lastname));
    printf("\n%s %s\n", name, lastname);
    printf("%*zd %*zd", -strlen(name), strlen(name), -strlen(lastname),
           strlen(lastname));

    return 0;
}
