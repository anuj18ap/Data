#include<stdlib.h>
#include<string.h>
#include<stdio.h>
void main(int argc,char **argv)
{
    if(argc!=4)
    {
        printf("Usage:. ./a.out <file_name> <find_string> <replace_string>\n");
        //return;
    }

    FILE *fp=fopen(argv[1],"r");
    if(fp==0)
    {
        printf("File not found..\n");
        return;
    }
    char ch[200];
    char *s[200];
    int c=0;

    while(fgets(ch,sizeof(ch),fp))
    {
        s[c]=(char *)malloc(strlen(ch)+1);
        strcpy(s[c],ch);
        c++;
    }    
    fclose(fp);
    int i,j,f=0;
    for(i=0;i<c;i++)
    {
        char *p=strstr(s[i],argv[2]);
        if(p!=NULL)
        {
            f=1;
          //  printf("<%s> is changed to <%s> ",s[i],argv[3]);
            strcpy(s[i],argv[3]);
            int len=strlen(s[i]);
            
           if (argv[3][len - 1] != '\n') 
            {
                strcat(s[i], "\n");
            }
        }
        //free(s[i]);
    }
    fp=fopen(argv[1],"w");

    for(i=0;i<c;i++)
    {
        fputs(s[i],fp);
        free(s[i]);
    }
    if(f==0)
    {
        printf("String Not Found to replace ..\n");
    }
}