#include<stdio.h>
void rec_prime(int,int);
void main()
{
    int num,num1,c;
    printf("enter the range\n");
    scanf("%d %d",&num,&num1);

    rec_prime(num,num1);

}
void rec_prime(int num,int num1)
{
	static int i=1,c=0;
	
    if(num>num1)
    return;
        
        if(i<=num)  //fail when i>num;
        {
            if(num%i==0)
            c++;

            i++;
            rec_prime(num,num1);
            return;
        } 
        if(c==2)
        {   
            c=0;
            printf("%d ",num);
        
        }
        i=1;
        c=0;
    rec_prime(++num,num1);
}