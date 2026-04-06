#include<stdio.h>
int main()
{
    char a= 3 ,b=4;
    printf("the bitwise and operaton is %d\n",a&5);
    printf("the bitwise OR operaton is %d\n",a|b);
    printf("the bitwise left shift operaton is %d\n",a<<2);
    printf("the bitwise right shift operaton is %d\n",b>>2);
    printf("the bitwise xor operaton is %d\n",a^b);
return 0;
}