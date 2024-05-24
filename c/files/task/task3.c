#include<stdlib.h>
#include<stdio.h>
void main(int argc ,char **argv)
{
    if(argc!=2)
    {
        printf("Usage :. ./a.out data..\n");
        return;
    }

    FILE *fp=fopen("data","r");
    if(fp==0)
    {
        printf("FILE NOT FOUNd..\n");
        return;
    }
    
    //printf("File found..\n");

    int i=0,c=0;
    char ch;
    while((ch=fgetc(fp))!=EOF){
       c++;
    }
    printf("%d \n",c);
    char *s=malloc(sizeof(c+1));
    int flag=0;
    int l=0;

    rewind(fp);
    while((ch=fgetc(fp))!=EOF)    
    s[i++]=ch;
    int c1=0;
    for(i=0,flag=0;s[i];i=l+1)
    {
        for(l=i,c1=0,flag=1; s[l]!=' ' && s[l]!='\n';c1++,l++);
        if(flag==1){
        printf("%d ",c1);
        c1=0;
        flag=0;
        }
    }
 fclose(fp);   
}