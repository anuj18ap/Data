#include<stdio.h>
void rec_armstrong(int );
void main()
{
    int num;
    printf("enter the number..\n");
    scanf("%d",&num);

    rec_armstrong(num);
}
void rec_armstrong(int num)
{
    static int c=0,r,c1=0,mul=1,sum=0,i=0,n,flag=0,flag1=1;
    if(flag1==1){
        if(flag==0)
        {
            n=num;
            flag=1;
        }

        if(n)
        {
            c++;
            n/=10;
            rec_armstrong(num);
            return;
        }
        else{
            flag1=0;
            n=num;
        }
    }
    if(n)
    {   
        if(flag==1){
        r=n%10;
        flag=0;
        i=0;
        mul=1;
        }
        if(i<c)
        {
            mul=mul*r;
            i++;
            rec_armstrong(num);
            return;
        }
        else{
        flag=1;
        n=n/10;
        }
        sum=sum+mul;
        //sum=0;
        rec_armstrong(num);
        return;
    }

    if(sum==num)
    printf("YES\n");
    else
    printf("NO");
    c=0,r,c1=0,mul=1,sum=0,i=0,n,flag=0,flag1=1;
}