#include<stdio.h>
void check_prime(int );
void prime_range(int ,int);
void main()
{
    int num;
    //printf("Enter the number..\n");
    //scanf("%d",&num);

    prime_range(2,50);

}

void prime_range(int r,int r1)
{
    if(r<=r1)
    {
       // static int c=0;
       // static int i=1;
        check_prime(r);
        prime_range(r=r+1,r1);
    }
}

void check_prime(int n)
{
    static int i=1,c=1;
    if(i<=n)
    {
        if(n%i==0)
       {
        
       }
        i++;
        check_prime(n);
    }
    if(c==2)
    printf("%d ",n);
    

}