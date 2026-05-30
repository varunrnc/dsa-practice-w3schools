#include <stdio.h>

int main()
{
    int i, n, arr[20], small, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    small = arr[0];
    pos = 0;
    for(i=1; i<n; i++){
        if(arr[i] < small){
            small = arr[i];
            pos = i;
        }
    }
    printf("The smallest element is : %d\n", small);
    printf("The position of the smallest element in the array is: %d", pos);

    return 0;
}