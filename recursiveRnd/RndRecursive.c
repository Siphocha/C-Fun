#include <stdio.h> // Required for printf and other standard I/O functions
#include <string.h> // Required for strlen function


void reverseStringRecursive(char str[], int start, int end) {
    if (start >= end) {
        return;
    }

    // Swap characters at the start and end positions
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseStringRecursive(str, start + 1, end - 1);
}

// Main function to test the recursive string reversal
int main() {
    // Declare a character array (string) to be reversed
    char myString[] = "Hello, World!";
    char anotherString[] = "Recursion";
    char singleCharString[] = "A";
    char emptyString[] = "";

    // Print the original string
    printf("Original string: \"%s\"\n", myString);
    reverseStringRecursive(myString, 0, strlen(myString) - 1);
    printf("Reversed string: \"%s\"\n\n", myString);

    printf("Original string: \"%s\"\n", anotherString);
    reverseStringRecursive(anotherString, 0, strlen(anotherString) - 1);
    printf("Reversed string: \"%s\"\n\n", anotherString);

    printf("Original string: \"%s\"\n", singleCharString);
    reverseStringRecursive(singleCharString, 0, strlen(singleCharString) - 1);
    printf("Reversed string: \"%s\"\n\n", singleCharString);

    printf("Original string: \"%s\"\n", emptyString);
    reverseStringRecursive(emptyString, 0, strlen(emptyString) - 1);
    printf("Reversed string: \"%s\"\n\n", emptyString);

    return 0; // Indicate successful execution
}
