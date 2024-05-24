#include<stdio.h>
int rec_fact(int );
void main()
{
    int num,k;
    printf("Enter the number..\n");
    scanf("%d",&num);
    k=rec_fact(num);
    printf("Ans = %d\n",k);
}

int rec_fact(int n)
{
    if(n>0)
    {
        return n*rec_fact(n-1);
    }
    else
    return 1;
}