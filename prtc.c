#include <stdio.h>

int main() {
    int age = 43;
    int* ptr = &age;
    printf("%p \n", &age);
    printf("%d", *ptr);
}