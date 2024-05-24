#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void main(int argc, char **argv )
{
    FILE *fp;
    fp=fopen(argv[2],"r");

    if(fp==0)
    {
        printf("File is not present..\n");
        return;
    }
    int c=0,c1=0;
    char ch;

    while((ch=fgetc(fp))!=EOF)
    {
        c++;
        if(ch=='\n')
        {
            if(c>c1)
            {
                c1=c;
                c=0;
            }
        }
    }

    rewind(fp);

    char *s=malloc(sizeof(c1+1));
    
    while((fgets(s,c1+1,fp)))
        if(strstr(s,argv[1]))
        printf("%s\n",s);


}

