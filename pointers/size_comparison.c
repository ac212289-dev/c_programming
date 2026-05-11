#include<stdio.h>
int main(){
int arr[3]={1,2,3};
int (*ptr)[3]=&arr;
printf("the size array is %d",sizeof(arr));
printf("\n");
printf("the size pointer is %d",sizeof(ptr));

return 0;
}