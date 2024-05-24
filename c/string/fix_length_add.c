#include<stdio.h>
void main(){
    char s[20],t[20],n[20];
    int i,j,k,l,flag;
    printf("Enter the String : ");
    scanf("%[^\n]",s);
    printf("Enter the Old Word : ");
    scanf("%s",t);
    printf("Enter the new Word : ");
    scanf("%s",n);
    for(i=0;t[i];i++);
    for(j=0;n[j];j++);

    if(i!=j){
        printf("\033[1;31msize is not same\n\033[0m");
        return;
    }

    for(i=0;s[i];i=j+1){
        for(l=i;s[l]!=' '&& s[l];l++);
        for(j=i,k=0;j<l;k++,j++){
            if(s[j]!=t[k]){
                flag=0;
                break;
            }
            else{
                flag=1;
            }
        }
        if(flag==1){
            flag=0;
            for(j=i,k=0;j<l;k++,j++){
                s[j]=n[k];
            }
        }
    }
    
    printf("\033[1;33m%s\n\033[0m",s);
}