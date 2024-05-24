#include<stdio.h>
void main()
{
    int pos,num;
    printf("Enter the number..\n");
    scanf("%d",&num);

    if(num<16)
    pos=3;
    else if(num<32)
    pos=4;
    else if(num<64)
    pos=5;
    else if(num<128)
    pos=6;
    else
    pos=7;


    for( ; pos>=0 ; pos--)
    printf("%d",((num>>pos)&1));
    printf("\n");
}