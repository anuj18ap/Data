#include<stdlib.h>
#include<stdio.h>
void main(){
    char s[30],i;
    printf("Enter the string..\n");
    scanf("%[^\n]",s);

    for(i=0;s[i];i++);
    printf("Size of the String is : %d Bytes",i);

    
}