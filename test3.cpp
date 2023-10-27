//Given an unsorted array arr[] of size N having both negative and positive integers. The task is place all negative element at the end of array without changing the order of 
//positive element and negative element.
#include <stdio.h>

int main() {
    int N;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Separate negative and positive elements in the array
    int positiveIndex = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] >= 0) {
            // Swap the positive element with the element at positiveIndex
            int temp = arr[i];
            arr[i] = arr[positiveIndex];
            arr[positiveIndex] = temp;
            positiveIndex++;
        }
    }

    // Print the modified array
    printf("Modified array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
return 0;
}
