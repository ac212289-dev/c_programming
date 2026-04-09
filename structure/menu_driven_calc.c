#include<stdio.h>
int a,b;
void numbers(){
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the first number:");
    scanf("%d",&b);
    return;

}
int add(int a,int b){
    return a+b;
}
int subs(int a,int b){
    return a-b;
}
int multi(int a ,int b){
    return a*b;
}
int divide(int a,int b){
    return a/b;
}
int main(){
    int n,result;
    printf("WELCOME:\n");
    
    do{
        printf("select one of the following :\n1.Add\n2.Substract\n3.Multiply\n4.Divide\n5.exit");
    scanf("%d",&n);
    if (n==1){
        numbers();
        result=add(a,b);
printf("the result of the operation is%d\n",result);
    }
    else if(n==2){
        numbers();
        result=subs(a,b);
printf("the result of the operation is%d\n",result);
    }
    else if(n==3){
        numbers();
       result=multi(a,b);
printf("the result of the operation is%d\n",result);
    }
    else if (n==4){
        numbers();
        result=divide(a,b);
printf("the result of the operation is%d\n",result);
     }
    else if(n==5){
     printf("exiting the progrem");
    }
}
while(n!=5);
    return 0;
    }
