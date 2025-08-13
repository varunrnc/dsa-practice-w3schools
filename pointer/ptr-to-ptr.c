#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int *px, **ppx;
    px = &x;
    ppx = &px;

    printf("\n %d", **ppx);
    return 0;
}