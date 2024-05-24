#include<stdio.h>
int check_pallindrone(int );
void main()
{
    int num;
   // printf("Enter the number..\n");
    //scanf("%d",&num);
    int l,k;
    for(num=101 ; num<200 ; num++)
   {
    k=check_pallindrone(num);

    if(k==num)
    printf("%d ",num);
   // else
    //printf("Not a pallindrone..\n");
   }
}

int check_pallindrone(int n)
{
    int static r,sum=0;
    if(n)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
        check_pallindrone(n);
    }
    return sum;
}