#include<stdio.h>
void main(){
    int i,l, c=0,flag=0;
    char s[20];
    printf("Enter the String..\n");
    scanf("%s",s);

    for(l=0;s[l];l++);           //L=5
    
    for(i=0,l=l-1;i<l;i++,l--){
        if(s[i]!=s[l]){
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("pallindrone\n");
    else
    printf("No pallindrone\n");
}