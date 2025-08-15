#include <stdio.h>
#include <stdlib.h>

struct Car {
    char brand[7];
    int year;
};

int main()
{
    struct Car car = {"Toyota", 2020};

    // Declare a pointer to the struct
    struct Car *ptr = &car;

    // Access members using the -> operator
    // printf("%u\n", ptr);
    // printf("%u", &car.year);

    printf("%s\n", car.brand);
    printf("%s\n", ptr->brand);
    printf("%s\n", (*ptr).brand);
    
    return 0;
}