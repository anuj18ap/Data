#include<stdio.h>
void main(){
    int i,c=0;
    char s[20];
    printf("Enter the String..\n");
    scanf("%s",s);

    for(i=0; s[i] ;i++ ){
        if(s[i]>='0'&& s[i]<='9')
        c++;
    }
    printf("%d\n",c);
}