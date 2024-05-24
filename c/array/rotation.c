#include<stdio.h>
void main()
{
    int a[]={10,20,30,40,50},num;
    printf("Enter the number..\n");
    scanf("%d",&num);
    int n=0,ele;

    ele=sizeof(a)/sizeof(a[0]);
    printf("ele=%d\n",ele);
    
    while(n<num)
    { 
        int t=a[ele-1];
        int i;
        for(i=ele-1 ; i>0 ; i--)
        {
            a[i]=a[i-1];
        }
        n++;
        a[0]=t;
    }
    int i;
    for(i=0 ; i<ele ;i++)
    printf("%d ",a[i]);
    printf("\n");
}