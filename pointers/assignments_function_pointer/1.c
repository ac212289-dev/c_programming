#include <stdio.h>

// Function definition
int add(int a, int b) {
    return a + b;
}

int main() {
    // Function pointer declaration
    int (*ptr)(int, int);

    // Assigning function to pointer
    ptr = add;

    // Calling function using pointer
    int result = ptr(5, 3);

    printf("Result: %d\n", result);

    return 0;
}