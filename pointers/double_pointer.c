#include<stdio.h>
int main()
{ 
    int x =5;
    printf("value of x : %d\n",x);
    int *ptr =&x;
    int **dptr=&ptr;
    **dptr=10;
    printf("value of x : %d\n",x);
    printf("value of x : %d\n",*ptr);
    printf("value of x : %d\n",**dptr);
    return 0;
}