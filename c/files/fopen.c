#include<stdio.h>
#include<stdlib.h>

void main(int argc, char **argv )
{
    FILE *fp=fopen(argv[1],"r+");

    if(fp==0)
    {
        printf("File is not present..\n");
        return;
    }
    int i,c;
    char ch,op,a;


        while((ch=fgetc(fp))!=EOF)
            c++;
        rewind(fp);

        int j=0;
        char *s=malloc(sizeof(c+1));
        while((ch=fgetc(fp))!=EOF)
                s[j++]=ch;
                s[j]='\0';

        rewind(fp);
        
        int k;
        for(k=0;k<c;k++)
        {
            if(s[k]==argv[2][0])
            s[k]=argv[3][0];
        }
        
        for(k=0;s[k];k++)
            fputc(s[k],fp);


}   
