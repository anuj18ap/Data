#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main ()
{
    FILE *fp=fopen("data","r");
    if(fp==0)
    {
        printf("File not Found..\n");
        return;
    }
    char ch[200];
    char *s[200];
    int c;

    while(fgets(ch,sizeof(ch),fp))
    {   
        s[c]=(char*)malloc(strlen(ch)+1);
        strcpy(s[c],ch);
        c++; 
    }   
    fclose(fp);

    int i,j,l;

    for(i=0 ; i<c ; i++)
    {
        for(j=0 ; s[i][j] ; j=l+1)
        {
            if(s[i][j]>='a' && s[i][j]<='z' )
            s[i][j]=s[i][j]-32;

            for(l=j; s[i][l] && s[i][l]!=' ' ; l++);
        }
    }

    fp=fopen("data","w");
    for(i=0 ;i<c;i++)
    {
        fputs(s[i],fp);
       // printf("%s",s[i]);
        free(s[i]);
    }
    
    fclose(fp);
}