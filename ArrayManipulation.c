#include <stdio.h>

int main() {
    int N;

    // Ask the user for the array size
    printf("Enter the size of the array (N): ");
    scanf("%d", &N);

    // Validate input
    if (N <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }

    int arr[N];
    int sum = 0;
    int max, min;

    // Take input for the array
    for (int i = 0; i < N; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

}