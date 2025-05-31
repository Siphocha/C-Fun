#include <stdio.h>


int main() {
    int sumArray(int arr[23, 45, 12, 0, 45, 89], int size)
    {
        if (size == 0)
            return 0;
        else
            return arr[size - 1] + sumArray(arr, size -1);
    }
}