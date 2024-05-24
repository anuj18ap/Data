#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=fopen("data","r");
    if(fp==0)
    {
        printf("FILE IS NOT FOUND..\n");
        return;
    }
    int i,j,k,l;
    char ch;
    int c=0,c1=0,c2=0;
    while((ch=fgetc(fp))!=EOF)
    {
        c++;
        if(ch=='\n')
        {
            l++;
            if(c>c1)
            {
                c1=c;
            }
            c=0;
        }
    }
    rewind(fp);
    char t[200];
    char **s=malloc(sizeof(char*)*l);

    while(fgets(t,sizeof(t),fp))
    {
        s[c2]=malloc(sizeof(char)*c1);
        strcpy(s[c2],t);
        c2++;
    }
    fclose(fp);
    int flag=0,m,n;
   for(i=0;i<l;i++)
    {
        //logic
        strstr(s[i])
    }

    for(i=0;i<l;i++)
    {
        printf("%s",s[i]);
    }
}