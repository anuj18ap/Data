#include<stdio.h>
void *my_strcpy(char *,const char*);
void main()
{
    char s[]="ab",d[]="wxyz";
    my_strcpy(d,s);
    printf("%s\n",d);
}

void *my_strcpy(char *d,const char*s)
{
    static int i=0;
    if(s[i])
    {
        d[i]=s[i];
        i++;
        my_strcpy(d,s);
    }
    d[i]=s[i];
}