#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("First element (array): %d\n", arr[0]);
    printf("First element (pointer): %d\n", *ptr);
    printf("Second element (pointer): %d\n", *(ptr + 1));

    return 0;
}