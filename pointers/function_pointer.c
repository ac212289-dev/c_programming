#include <stdio.h>

int add(int a, int b)
{
    return a +b;
}

int main()
{
    int (*ptr)(int, int);

    ptr = add;

    int result = ptr(2, 3);

    printf("Result = %d\n", result);

    return 0;
}