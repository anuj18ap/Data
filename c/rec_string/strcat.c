#include <stdio.h>
void my_strcat(char *, const char *);
void main() 
{
    char d[200] = "Anuj ";
    const char s[] = "Alpeshbhai prajapati";
    my_strcat(d, s);
    printf("%s\n", d); 

}
void my_strcat(char *d, const char *s) 
{
    if (*d == '\0') 
    { 
        if (*s == '\0') 
            return;
        else 
        {
            *d = *s;
            my_strcat(d + 1, s + 1);
        }
    } 
    else 
        my_strcat(d + 1, s);
}

