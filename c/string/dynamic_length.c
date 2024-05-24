#include<string.h>
#include<stdio.h>
void main(){
    char s[50]="pf12 pf123 anuj pf",t[20]="pf",n[100],t1[20]="printf";
    int i,j,k,l,flag,l1;
/*   printf("Enter the String : ");
    scanf("%[^\n]",s);
    printf("Enter the Old Word : ");
    scanf("%s",t);
    printf("Enter the new Word : ");
    scanf("%s",n);
*/
    for(l=0;t[l];l++);
    for(l1=0;t1[l1];l1++);
  //  for(j=0;n[j];j++);
   // int diff=j-i;
   j=0;
   // printf("difference is = %d\n",diff);
    for(i=0;s[i];i++){
        if(strncmp(&s[i],t,l)==0){
            for(k=0;k<l1;k++){
                n[j++]=t1[k];
            }
            i=i+l-1;
        }
        else{
            n[j++]=s[i];
        }
    }
    printf("%s\n",n);
}