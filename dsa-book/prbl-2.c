// WAP to convert an integer into the crresponding floating point number.
#include <stdio.h>

int main()
{
    float f_num;
    int i_num;

    printf("Enter any integer: ");
    scanf("%d", &i_num);
    f_num = (float) i_num;
    printf("The floating point variant of %d is = %.2f", i_num, f_num);

    // float a = 10.6;
    // int b;
    // b = a;
    // printf("%d", b);

    // int a = 5;
    // float b;
    // b = a;
    // printf("%f", b);

    return 0;
}