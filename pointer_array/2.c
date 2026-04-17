#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int *p = arr;
    int (*pa)[5] = &arr;

    printf("Address using normal pointer:\n");
    printf("%p\n", p);
    p++;
    printf("%p\n", p);

    printf("\nAddress using pointer to array:\n");
    printf("%p\n", pa);
    pa++;
    printf("%p\n", pa);

    return 0;
}