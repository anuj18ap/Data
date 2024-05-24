#include<stdlib.h>

#include<stdio.h>
void main(int argc, char **argv )
{
    if(argc!=4)
    {
        printf("Usage:...\n");
        return;
    }
    FILE *f1=fopen("data1","r");
    FILE *f2=fopen("data2","r");

    if(f1==0)
    {
        printf("data1 file is not Found..\n");
        return;
    }
    if(f2==0)
    {
        printf("data2 File is not Found..\n");
        return;
    }
    int c=0;
    char ch,ch1;
    while((ch=fgetc(f1))!=EOF)
    c++;    
    while((ch=fgetc(f2))!=EOF)
    c++;
    printf("count = %d\n",c);

    char *s=malloc(sizeof(c+1));

    rewind(f1);
    rewind(f2);

    int i,j;
    i=0;
    while((ch=fgetc(f2))!=EOF)
    {   
        s[i]=ch;
        i=i+2;
    }
    i=1;
    while((ch=fgetc(f1))!=EOF)
    {   
        s[i]=ch;
        i=i+2;
    }
    s[i]='\0';

    FILE *f3=fopen("data3","r+");
    for(i=0;s[i];i++)
    //printf("%c",s[i]);    
    fputc(s[i],f3);

}