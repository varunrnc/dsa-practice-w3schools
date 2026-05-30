#include <stdio.h>

int main()
{
    int i, n, arr[20], sum = 0;
    float mean = 0.0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        sum += arr[i];
    }
    mean = (float) sum / n;
    printf("The sum of the array elements: %d\n", sum);
    printf("The mean of the array elements: %.2f", mean);

    return 0;
}