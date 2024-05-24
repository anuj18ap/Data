#include<stdio.h>
float my_atof(const char*);
void main(int argc , char **argv)
{
    if(argc!=2)
    {
        printf("./a.out number..\n");
        return;
    }

    float num=my_atof(argv[1]);
    printf("%f \n",num);
    
    }

float my_atof(const char (*p))
{
    float num=0;
    int i=0;
    if(p[0]=='+' || p[0]=='-')
    i=1;
    else 
    i=0;

    int c=0;

    for( ; p[i]!='.' ;i++)
    {
        if(p[i]>='0' && p[i]<='9')
        num=num*10+(p[i]-48);
    
        else
        break; 
    }
    float num1;
    for(i=i+1 ; p[i] ; i++)
    {
        if(p[i]>='0' && p[i]<='9')
        {
        num1=num1*10+(p[i]-48);
        c++;
        }
    }
    for(i=0 ; i<c ;i++)
    num1=num1/10;
    num1=num+num1;
    if(p[0]=='-')
    num1=-(num1);

    return num1;
}