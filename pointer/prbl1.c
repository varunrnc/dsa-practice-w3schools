#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *pnum;
    pnum = &num;
    printf("\n Enter the number : ");
    scanf("%d", pnum);
    printf("\n The number that was entered is : %d", *pnum);
    return 0;
}