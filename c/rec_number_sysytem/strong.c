#include<stdio.h>
void strong(int num);
void main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);

    strong(num);
}
void strong(int num)
{

    static int n,sum=0,mul=1,r,flag=0,flag1=0;
        if(flag==0)
        {
        n=num;
        flag=1;
        }

        if(n)
        {   
            if(flag1==0)
            {
              r=n%10;
              flag1=1;
            }

            if(r)
            {
              mul=mul*r;
              r--;
              strong(num);
              return;
            }
            else{ 
            flag1=0;
            }
               
           
            sum=sum+mul;
            n=n/10;
            mul=1;
            strong(num);
        }
        else{
        if(num==sum)
            printf("YES");
         else
            printf("NO");
        }
}
       /* int r,mul,n,sum;
        for(n=num,sum=0 ; n ; n=n/10)
        {
            r=n%10;
            for(mul=1 ; r ; r--)
            mul=mul*r;
        sum=sum+mul;
        }
        if(sum==num)
        printf("strong=%d ",num);
}
*/