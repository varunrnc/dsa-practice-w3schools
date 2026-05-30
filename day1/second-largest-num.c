#include <stdio.h>

int main()
{
    int i, n, arr[20], large, second_large;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elments: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    large = arr[0];
    for(i=1; i<n; i++){
        if(arr[i] > large){
            large = arr[i];
        }
    }

    return 0;
}