#include<stdio.h>
void incrementarray(int arr[],int size){
    int *ptr=arr;
    *ptr=*ptr+1;
}
int main()
{ int n;
    int arr[n];
int m;
printf("enter the size of array\n");
if(scanf("%d",&n)!=1 && scanf("%d",&n)<=0)
{
    printf("enter a valid number\n");
} incrementarray(arr,n);
    return 0;
}