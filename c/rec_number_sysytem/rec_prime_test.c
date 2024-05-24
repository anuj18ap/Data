#include<stdio.h>
void check_prime(int num);
void main(){
    int num;
    printf("Enter the number..\n");
    scanf("%d",&num);
    check_prime(num);
}
void check_prime(int num){
    static int i=1,c=0;
    if(i<=num){
        if((num%i)==0)
        c++;
        i++;
        check_prime(num);
        return;
    }
    if(c==2)
    printf("Yes\n");
    else
    printf("No\n");
}
