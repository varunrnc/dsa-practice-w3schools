// Call by Reference
#include <stdio.h>
#include <stdlib.h>

void add(int *);

int main()
{
    int num = 2;
    printf("The value of num before calling the function = %d\n", num);
    add(&num);
    printf("The value of num after calling the function = %d\n", num);
    return 0;
}

void add(int *n)
{
    *n = *n + 10;
    printf("The value of num in the called function = %d\n", *n);
}