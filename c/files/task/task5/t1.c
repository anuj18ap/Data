#include<stdio.h>
#include<stdlib.h>
void main(int argc, char **argv)
{
    if(argc!=4)
    {
        printf("Usage:.\n");
        return;
    }
    FILE *f1=fopen(argv[1],"r");
    FILE *f2=fopen(argv[2],"r");
    FILE *f3=fopen(argv[3],"w");
        
   if(f1==NULL)
    {
        printf("data 1 is not found..\n");
        return;
    }
    if(f2==NULL)
    {
        printf("data 2 is not found..\n");
        return;
    }
    char s[100];
    int c=0;
    while(fgets(s,100,f1))
        c++;
    while(fgets(s,100,f2))
        c++;    
    printf("%d\n",c);
    rewind(f1);
    rewind(f2);
    
    int i;
    for(i=0  ; i<c ; i++ )
    {   
        if(i%2==0)
        {
            fgets(s,100,f1);
            fputs(s,f3);
        }
        else
        {
            fgets(s,100,f2);
            fputs(s,f3);
        }
    }
}