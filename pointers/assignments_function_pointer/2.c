#include <stdio.h>

// Functions
int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int (*ptr)(int, int);

    // Call add
    ptr = add;
    printf("Addition: %d\n", ptr(4, 2));

    // Call multiply
    ptr = multiply;
    printf("Multiplication: %d\n", ptr(4, 2));

    return 0;
}