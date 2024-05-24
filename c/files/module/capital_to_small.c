#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=fopen("data","r");
    char ch;
    int i,j,k,c=0,c1=0,l=0;

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

    char t[200];
    char **s=malloc(sizeof(char*)*l);
   
    rewind(fp);

    int c2=0;
    while(fgets(t,sizeof(t),fp))
    {
        s[c2]=malloc(strlen(t)+1);
        strcpy(s[c2],t);
        c2++;
    }
    
    fclose(fp);

    for(i=0;i<l;i++)
    {
        for(j=0;s[i][j]; j++)
        {
            if((s[i][j]>='a' && s[i][j]<='z') || (s[i][j]>='A' && s[i][j]<='Z'))
            s[i][j]^=32;

           // for( k=j ; s[i][k] && s[i][k]!=' ' ; k++ );
        }
    }
    fp=fopen("DATA","w");
    for(i=0;i<l;i++)
    {
       printf("%s",s[i]);
        //fputs(s[i],fp);
       // free(s[i]);
    }
    fclose(fp);    
}
