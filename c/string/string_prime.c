#include<stdio.h>
void main(){
    int i, c=0;
    char s[20];
    printf("Enter the String..\n");
    scanf("%s",s);
for(i=0; s[i]; i++){
    c=0;
    if(s[i]>='0' && s[i]<='9')
        {
            s[i] = s[i] - 48;
            for(int j=1; j<=s[i]; j++)
            if(s[i]%j==0)
            c++;
        }
    if(c==2)
    printf("yes\n");
    }
}