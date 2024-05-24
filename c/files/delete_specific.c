#include<stdlib.h>
#include<stdio.h>
void main(int argc , char **argv)
{
    if(argc!=4)
    {
        printf("Usage :. ./a.out file a z\n");
        return;
    }
    
    FILE *fp=fopen("data","r+");
    if(fp==0)
    {
        printf("No file Found..\n");
        return;
    }
    int i,c=0;
    char ch;
    while((ch=fgetc(fp))!=EOF)
        c++;
    
    rewind(fp);

    char *s=malloc(sizeof(c+1));
    while((ch=fgetc(fp))!=EOF)
    s[i++]=ch;
    s[i]='\0';

    for(i=0;s[i];i++)
        if(s[i]==argv[2][0])
            s[i]=argv[3][0];

    rewind(fp);

 //   for(i=0;s[i];i++)
   //     fputc(s[i],fp);

   fputs(s,fp);
}