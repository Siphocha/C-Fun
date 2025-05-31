#include <stdio.h>
int main(){

int a, b;

printf("Enter value for a: ");
scanf("%d", &a);  //Reads an integer for a

printf("Enter value for b: ");
scanf("%d", &b);  //Reads an integer for b

int sum = a + b;
int sub = a - b;
int product = a * b;
int div = a / b;
// Simple arthmetic
printf("sum= %d\n", sum);
printf("sub= %d\n", sub);
printf("product= %d\n", product);
printf("div= %d\n", div);
// rationale of greater than
if(a > b){
printf("a is greater than b\n");
}
else{
printf("b is greater than a\n");
}
// assigment operator
a += 5;
    printf("a increases by 5: %d\n", a);

// e. Bitwise
    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);

return 0;
}
