#include<stdio.h>
void swap(int *num , int *num2 )
{int temp;
    temp=*num;
    *num=*num2;
    *num2=temp;
}
int main()
{
    int a , b;
    printf("enter the numbers to swap : \n");
    scanf("%d",&a);
    scanf("%d",&b);
    swap(&a,&b);
    printf("the number is :%d %d",a,b);
    return 0;
}