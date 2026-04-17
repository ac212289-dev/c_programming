#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int *p;          // normal pointer
    int (*pa)[5];    // pointer to array

    p = arr;         // array decays to pointer
    pa = &arr;       // address of whole array

    printf("Using normal pointer:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    printf("\n\nUsing pointer to array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", (*pa)[i]);
    }

    return 0;
}