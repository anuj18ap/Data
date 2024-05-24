#include<stdio.h>
void main()
{
    int a[]={1,1,1,1,2,2,2,3,3,4,4};
    int ele=sizeof(a)/sizeof(a[0]);

    int i,j,k,flag,c,result=0;

    for(i=0;i<ele;i++)
    {
        for(j=i+1;j<ele-1;j++)
        {
            if(a[i]==a[j])
            {
                i++;
                flag=1;
            }

        }

        if(flag==1)
        {
            result=result+1;
           // printf("Repeated element are : %d\n",result);
            flag=0;
        }
        
    }
    printf("Repeated element are : %d\n",result);
}