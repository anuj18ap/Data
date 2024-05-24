#include<stdio.h>
void main(){
    char a[100]="anuj";
    char *q=a;
    while(*q)
    q++;
    *q='a';
    q++;
    *q='p';
    int i;
    for(i=0;i<50;i++)
    printf("%d ",a[i]);

   // printf("%d ",a[i]);
}