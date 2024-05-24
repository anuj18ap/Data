#include<stdio.h>
int check_pallindrone(int );
void main()
{
    int num;
    printf("Enter the number..\n");
    scanf("%d",&num);
    
    int k=check_pallindrone(num);
    if(k==num)
    printf("Number is pallindrone...\n");
    else
    printf("Not a pallindrone..\n");
}

int check_pallindrone(int n)
{
    static int i=1,sum=0;
    if(i<n)
    {
        if(n%i==0)
        sum=sum+i;

        i++;
        check_pallindrone(n);
    }
    return sum;
}