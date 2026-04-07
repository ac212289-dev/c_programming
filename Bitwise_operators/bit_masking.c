#include<stdio.h>
int set_bit3(int n){
    int mask =(1<<3);
    printf("the value after set bit 3 is:%d\n",n|mask);
    return n|mask;     
}
int toggle_bit2(int n){
    int mask =(1<<2);
   printf("the value after toggle bit 2 is:%d\n",n^mask);
    return n^mask;    
}
int clear_bit1(int n){
    int mask =(1<<1);
    printf("the value after clear bit 1 is:%d\n",n&~mask);
    return n&~mask;
}
int check_bit4(int n){
    int mask =(1<<3);
    if(n==(n&mask)){
    printf("the bit 3 is high\n");
    }
    else{
    printf("the bit 3 is low\n");
    }
    return n&mask!=0;     
}
int main(){
    int x;
    printf("enter the number");
    if(scanf("%d",&x)!=1 || x<0){
    printf("enter a valid number");    
        return 1;
    }
    set_bit3(x);
    clear_bit1(x);
    toggle_bit2(x);
    check_bit4(x);
    return 0;
}