#include<stdio.h>
int rec_strong(int );
int fact(int );
void main()
{
    int num=3;
    int k=rec_strong(num);
    if(k==num)
    printf("yes..\n");
    else
    printf("NO..\n");
}

int fact(int n)
{
    if(n)
    return n*(fact(n-1));
    else
    return 1;
}

int rec_strong(int num)
{
    static int r,sum=0;
    if(num)
    {
        r=num%10;
        num=num/10;
        sum=sum+fact(r);
        rec_strong(num);
    }
    else
    return sum;
}