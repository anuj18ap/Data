#include<stdio.h>

static int c=0;


int armstrong(int );
void count(int );
int mul(int );

void main()
{
    int num;
    printf("Enter the Number..\n");
    scanf("%d",&num);
    int k=armstrong(num);

    if(k==num)
    printf("Armstrong Number..\n");
    else
    printf("NOT armstrong number..\n");
}

void count(int num)
{
    static int flag=1;
    if(flag)
    {   
        if(num)
        {
            num=num/10;
            c++;
            count(num);
        }
        else
        flag=0;
    }
}

int armstrong(int num)
{
    static int n;
    n=num;
    count(n);
   
    //printf("count =%d\n",c);   //3 ********************
    static int c1=0,r,sum=0;
    if(c1<c)
    {
        r=num%10;
        sum=mul(r);
        printf("sum =%d ",sum);
        num=num/10;
        c1++;
        armstrong(num);
    }
    return sum; 
}

int mul(int r)
{
    static int i=0,m=1;
    static int o=0;
    if(i<c)
    {
        m=m*r;
        i++;
       mul(r);
        return ;
    }
    else
    {
        printf("%d ",o);
        i=0;
        m=1;
    } 
}     

