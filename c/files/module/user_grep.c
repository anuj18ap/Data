#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=fopen("data","r");
    char ch;
    int i,j,k,l,c=0,c1=0,c2=0;
    char o[200];
    
    printf("Enter the string..\n");
    scanf("%s",o);

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
    char **s=malloc(sizeof(char *)*l);

    while(fgets(t,sizeof(t),fp))
    {
        s[c2]=malloc(strlen(t)+1);
        strcpy(s[c2],t);
        c2++;
    }

    char *p,*q;
    char temp;
    for(i=0;i<l;i++)
    {
        if(p=strstr(s[i],o))
        {
            q=p;
            //for( ;*p && *p!=' ';p++);
            while(*q != ' ' && *q != '\0' && *q != '\n')
            {
                q++;
            }
            q--;
            if(*q=='\r')
            {
                q--;
            }
            for( ;p<q; p++,q--)
            {
                temp=*p;
                *p=*q;
                *q=temp;
            }
            
            
        }
    }
 
    for(i=0;i<l;i++)
    {
        printf("%s",s[i]);
    }
}