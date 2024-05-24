#include<stdio.h>
void main(){
    int i,j,k,num,n;
    char ch;
    printf("Enter the value..\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i;j++)
        printf(" ");

        for(k=0,ch='C'+n-1-i,num=2;k<n-i;ch--,k++){
        if(k%2==0)
        printf("%c ",ch);
        else
        printf("%d ",num++);
        }

        printf("\n");
    }


}