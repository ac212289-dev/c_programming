#include<stdio.h>
int main()
{
    FILE *fp;
    char str[500];
    fp=fopen("sample.txt","r");
    fgets(str, sizeof(str), fp);;
    printf("%s",str);
    fclose(fp);
    return 0;
}