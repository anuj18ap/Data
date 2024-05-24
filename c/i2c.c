// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
     static char i=0x01;
    int pos,op,c=0;
    while(1)
    {
        scanf("%d",&op);
        if(op)
        {
            for(c=0;c<1;c++)
            {
                L1:
                i++;
                if((i&0xf)<10)
                printf("0x%x",i);
                else
                goto L1;
            }
        }
        printf("\n");
    }
}
