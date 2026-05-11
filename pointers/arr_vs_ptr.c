#include<stdio.h>
int main(){
int arr[3]={1,2,3};
int *ptr=arr;
printf("the members of array are ");

for(int i=0;i<3;i++)
{
    printf(" %d ",*ptr);
ptr+=1;
}return 0;
}