#include<stdio.h>
#include <stdlib.h>
void main(int argc,char **argv)
{
    if(argc!=2)
    {
        printf("Usage:. ./a.out data..\n");
        return;
    }
    FILE *fp=fopen("data","r");
    if(fp==0)
    {
        printf("File not found..\n");
        return;
    }
    int c=0,w=-1,l=0;
    char ch;
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch<='9' && ch>='1')
        c++;
        if(ch==' ' || ch=='\n')
        w++;
        if(ch=='\n')
        l++;
    }
    fclose(fp);
    printf("lines are = %d \nwords are = %d\ndigits are = %d\n",l,w,c);


}
