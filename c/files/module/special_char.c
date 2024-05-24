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
        for(j=0;s[i][j];j=k+1)
        {
            for(k=j;s[i][k] && s[i][k]!=' ';k++)
            {
                if( !( (s[i][k]>='a'&&s[i][k]<='z') || (s[i][k]>='A'&&s[i][k]<='Z') || (s[i][k]>='0' &&s[i][k]<='9') )) //finding special characters
                {
                    if(s[i][k]=='\r')
                    {
                        s[i][k]='\r';
                    }
                    else if(s[i][k]=='\n')
                    {
                        s[i][k]='\n';
                    }
                    else
                    {
                     //   s[i][k] = '#';
                        flag=1;
                    }
                }
            }
            if(flag==1)
            {
                flag=0;
                char temp;
                if(s[i][k]=='\n')
                k--;
                if(s[i][k]=='\r')
                k--; 
                for(m=j,n=k-1;m<n;m++,n--)
                {
                    temp=s[i][m];
                    s[i][m]=s[i][n];
                    s[i][n]=temp;
                }
            }
        }
    }

    for(i=0;i<l;i++)
    {
        printf("%s",s[i]);
    }
}