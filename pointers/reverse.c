#include<stdio.h>
int main()
{   char str [100];
    char *start,*end; 
    char temp;
    printf("enter the string :\n");
    fgets(str,sizeof(str),stdin);
start=str;
end=str;
while(*end!='\0')
{   
    end++;
}end--;
while(start<end){
 temp=*start;
 *start=*end;
 *end=temp;
 start++;
 end--;
}
printf("the reverse of the string is :%s",str);

return 0;



    }
    