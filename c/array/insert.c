#include<stdio.h>
void main()
{
    int a[6]={10,20,40,50,60};
    int n,ele,num;
    ele=sizeof(a)/sizeof(a[0]);
    
    printf("Enter the position\n");
    scanf("%d",&n);
    printf("Enter the Number\n");
    scanf("%d",&num);
    int i;
    for( i=ele-1 ; i>n ; i--)
    {
        a[i]=a[i-1];
    }
    a[n]=num;

    for(i=0;i<ele;i++)
    printf("%d ",a[i]);
    printf("\n");
    
}