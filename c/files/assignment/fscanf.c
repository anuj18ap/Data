#include<stdio.h>
void main()
{
    char s[200];
    FILE *dp=fopen("DATA","w");  //dest
    FILE *fp=fopen("data","r");  //source 
    while((fscanf(fp,"%s",s))!=EOF)
    {
        fprintf(dp,"%s",s);
    }
}