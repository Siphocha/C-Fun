#include <stdio.h>

int main() {
    int a[5] = {1,2,3,4,5};
    printf ("%d", a[1]);
    printf("Address of element1: %p\n", (void*)&a[0]);
    printf("Address of element2: %p\n", (void*)&a[1]);
}