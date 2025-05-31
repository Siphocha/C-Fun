#include<stdio.h>
int main(){
int x, y;
char operator;

printf("First number: ");
scanf("%d", &x);

printf("+, -, *, / ? ");
scanf(" %c", &operator);  // Space to consume newline

printf("enter second number: ");
scanf("%d", &y);

int sum = x + y;
int sub = x - y;
int product = x * y;
// int div = a / b;         // Removed to avoid division by zero

if (operator == '+') {
    printf("%d\n", sum);
}

else if(operator == '-') {
    printf("%d\n", sub);
}

else if(operator == '*') {
    printf("%d\n", product);
}

else if(operator == '/'){ 
        if (x != 0) {
            int div = x / y;
            printf("Result: %d\n", div);
        }
        else
            printf("Don't divide by zero!\n");
}

else {
    printf("invalid operatorrr :\n");
}

return 0;
}
