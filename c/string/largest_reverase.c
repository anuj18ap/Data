#include<stdio.h>
void main()
{
    char s[]="Vector india banglore Ahmedabad ";
    int i,j,k=0,l,m,n=0,a,b;

    for(i=0 ; s[i] ; i=l+1)
    {
        for(l=i ; s[l] && s[l]!=' ' ; l++);
        if(l>k)
        {
            a=i;
            b=l;
            if(b-a>n)
            {
                j=a;
                m=b;
            }
        }
    }
    printf("%d %d\n",j,m);


    char t;
    for(m=m-1  ;j<m ;m--, j++)
    {
        t=s[j];
        s[j]=s[m];
        s[m]=t;
    }
    printf("%s\n",s);
}