#include<stdio.h>
void main()
{
    int a[]={10,50,40,57,20,57,60,60,30};
    int ele=sizeof(a)/sizeof(a[0]);
    int i,l,sl;
    
    if(a[0]>a[1])
    {
        l=a[0];
        sl=a[1];
    }
    else if(a[1]>a[0])
    {
        l=a[1];
        sl=a[0];
    }

    for(i=2 ; i<ele ;i++)
    {
        if(a[i]>l)
        {
            sl=l;
            l=a[i];
        }
        else if(a[i]>sl && a[i]!=l)
        {
            sl=a[i];
        }
    }

    printf("l=%d sl=%d\n",l,sl);
}