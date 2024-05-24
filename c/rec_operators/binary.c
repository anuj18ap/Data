#include<stdio.h>
void print_binary(int num);
void main()
{
    int num;
    printf("Enter the Number..\n");
    scanf("%d",&num);
    print_binary(num);

}
void print_binary(int n)
{
    static int pos=31;
    if(pos>=0)
    {
        printf("%d",((n>>pos)&1));
        pos--;
        print_binary(n);
    }
}