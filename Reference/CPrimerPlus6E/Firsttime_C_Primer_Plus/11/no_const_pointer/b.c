#include <stdio.h>
int main(void)
{
    const char *p1="Klingon";
    p1[0]='F';//ok?
    printf("Klingon");
    printf(": Beware the %ss!\n","Klingon");
    return 0;
}
