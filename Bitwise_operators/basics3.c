// day 1 of learning bitwise operations
#include<stdio.h>
// function prototypes
int even_odd(int);
int set_2nd_bit(int);
int toggle_3rd_bit(int);
int main()
  { 
    int w ;
    printf("enter a number:\n");
    if(scanf("%d",&w)!=1)
    {printf("enter a valid integer only");
    return 1;}
     even_odd(w);
    set_2nd_bit(w);
      toggle_3rd_bit(w);
    return 0;
}
// funtions definations
int even_odd(int a){
if(a&1)
    printf("the number is odd\n");
    else
     printf("no is even\n");
}
int set_2nd_bit(int a)
{
    printf("the number after set 2nd bit is %d \n",a|(1<<1));
    return a|(1<<1);
}
int toggle_3rd_bit(int a){
    printf("the number after toggle 3rd bit is %d \n",a^(1<<2));
    return a^(1<<2);
}