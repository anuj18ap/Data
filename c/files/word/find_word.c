#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    fp=fopen("data","r");
    char ch;
    int c=0,c1=0,l=0;
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
    char **s;
    int i,j,k;
   s=malloc(sizeof(char *)*l);   /////////////////////////////////  IMP //////////////////////////////////////////////
    
   for(i=0;i<l;i++)
   {
    s[i]=malloc((c1+2));
   }
  
   i=0;
    
    while(fgets(s[i],c1+2,fp))
    {
        i++;
    }    
    char *t=malloc(sizeof(c1+2)); //temp 
    
    
    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-1-i;j++)
        {
            if((strlen(s[j]))>(strlen(s[j+1])))
            {
                strcpy(t,s[j]);
                strcpy(s[j],s[j+1]);
                strcpy(s[j+1],t);
            }
        }
    }

    for(i=0;i<l;i++)
    {
    printf("%s",s[i]);
    free(s[i]);
    }
}
