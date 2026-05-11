#include<stdio.h>
int main(){
int arr[3]={1,2,3};
int (*ptr)[3]=&arr;
printf("the members of array are ");
for(int i=0;i<3;i++)
{
printf(" %d ",(*ptr)[i]);

}return 0;
}