#include<stdio.h>
void main()
{
        int i,t,j,k;
        int a[]={1,2,3,4,5,6,7,8,9};
        int ele=sizeof(a)/sizeof(a[0]);



        for(i=0 ; i<ele-1 ; i++)
        {
                for(j=0 ; j<ele-1-i ; j++)
                {
                        if(a[j]>a[j+1])
                        {
                                t=a[j];
                                a[j]=a[j+1];
                                a[j+1]=t;
                        }
                }
        }
        for(i=0 ; i<ele ; i++)
                printf("%d ",a[i]);
        printf("\n");

        for(i=0 ; i<ele ; i++)
        {
                if(a[i]%2==0)
                {
                        for(j=i ;j<ele-1 ; j++)
                        {
                                t=a[j];
                                a[j]=a[j+1];
                                a[j+1]=t;
                        }
                }
        }

        for(i=0 ; i<ele ; i++)
        {
                if(a[i]%2==0)
                {
                        for(j=i ;j<ele-1 ; j++)
                        {
                                for(k=i ; k<ele-1 ; k++)
                                {
                                        if(a[k]>a[k+1])
                                        {
                                        t=a[k];
                                        a[k]=a[k+1];
                                        a[k+1]=t;

                                        }
                                }
                        }
                        for(i=0 ; i<ele ; i++)
                        printf("%d ",a[i]);
                        return ;
                }
        }
                        for(i=0 ; i<ele ; i++)
                        printf("%d ",a[i]);

}