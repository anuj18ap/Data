#include<stdio.h>
int strcmp(char *,char *);
void main()
{
    char s[]="abcd",d[]="abcd";
    int m=strcmp(s,d);
    if(!m)
    printf("Strings are same..\n");
    else
    printf("Strings are not same..\n");
}
int strcmp(char *s,char*d)
 {
    static int i=0;
    if(s[i]!='\0' && d[i]!='\0')
    {
        if(s[i]!=d[i])
        return 1;
        else
        {
            i++;
            return strcmp(s,d);
        }
    }
    else
    return s[i]-d[i];
  
 }