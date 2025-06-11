#include <stdio.h>

int main() {
    int a = 1;
    float floating = 3.586;
    char name = "Henry";

    printf("address of integer: %p\n", (void*)&a );
    printf("address of float: %p\n", &floating);
    printf("address of name: %p\n", &name);
}