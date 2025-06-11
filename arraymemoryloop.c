#include <stdio.h>

int main() {
    int a[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &a[i]);
        printf("numbers are", i+1, a[i]);
    }

}