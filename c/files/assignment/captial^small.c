#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main( int argc,char**argv)
{
    if(argc!=2)
    {
        printf("Usage..\n");
        return;
    }
    FILE *fp=fopen(argv[1],"r");
    if(fp==0)
    {
        printf("File not Found..\n");
        return; 
    }
    char ch[200];
    char *s[200];
    int c=0;

    while(fgets(ch,sizeof(ch),fp))
    {
        s[c]=(char*)malloc(strlen(ch)+1);
        strcpy(s[c],ch);
        c++;
    }
    fclose(fp);

    int i,j;
    for(i=0;i<c;i++)
    {
        for(j=0;s[i][j];j++)
        {
            if((s[i][j]>='a' && s[i][j]<='z') || (s[i][j]>='A' && s[i][j]<='Z') )
            s[i][j]^=32;
        }    
    }

    fp=fopen(argv[1],"w");
    for(i=0;i<c;i++)
    {
        fputs(s[i],fp);
        free(s[i]);
   }
   fclose(fp);
}