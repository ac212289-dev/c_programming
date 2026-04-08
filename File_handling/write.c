#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("sample.txt","w");
    fprintf(fp ,"this is a addition");
    fclose(fp);
    return 0;
}