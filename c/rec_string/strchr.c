#include<stdio.h>
 char* my_strchr( char *,char );
 
void main()
{
    char s[]="abcd",ch='b';
    char *m=my_strchr(s,ch);
    
    if(m)
    printf("character is found..\n");
    else
    printf("character is not found\n");

    printf("%s\n",m);

}
char *my_strchr( char *p ,char ch)
{
    static int i=0,c=0;
    if(p[i])
    {
        if(p[i]==ch)
             return p+c;
        else
        {
            i++;
            c++;
            my_strchr(p,ch);
        }
    }
    else
    return 0;
}