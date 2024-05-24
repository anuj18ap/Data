#include<stdio.h>
int rec_sum(int );
void main()
{
    int num;
    printf("Enter the Number..\n");
    scanf("%d",&num);
    int ans=rec_sum(num);
    printf("Anser is = %d\n",ans);
}

int rec_sum(int n)
{
    static int sum=0,r;
    if(n)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
        rec_sum(n);
    }
    else 
    return sum ;
}