#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("enter the number of integers \n");       //for user to enter 
    scanf("%d",&n);   // store the valre of n
    int *ptr=(int *)malloc(n*sizeof(int));    //  allocate the size equivalent to size of n integers .

    if(ptr==NULL){          // if empty
        printf("Memory not available");
        exit(1);
    }
    for(i=0;i<n;i++){ //  if not zero it runs
        printf("enter an integer:");
        scanf("%d",ptr+i);   // ptr+i gives the next adddress ,  no need of * as it is already an address

    }
    for(i=0;i<n;i++)
    printf("%d",*(ptr+i));   // * is required to print the value of the ptr+i location //// or dereferencing it .
    return 0;

}