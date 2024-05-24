#include<stdio.h>
#include<stdlib.h>
void main(int argc,char**argv){
    FILE *fp=fopen(argv[1],"r");
    if(fp==0){
        printf("FILE IS NOT PRESENT\n");
        return;
    }
    char ch;
    int i,j,k,c=0,l=0,l1=0,c1=0;
    while((ch=fgetc(fp))!=EOF){
        c++;
        if(ch=='\n'){
            l++;
            if(c>c1){
                c1=c;
            }
            c=0;
        }
    }
    printf("l=%d c=%d\n",l,c);
    rewind(fp);
    char **p=malloc(sizeof(char*)*l);
    for(i=0;i<l;i++){
        p[i]=malloc(sizeof(char )*c1+1);
    }
    i=0;
    while(fgets(p[i],c1+1,fp)){
        i++;
    }
    int hl=0,hi;
    for(i=0;i<l;i++){
        for(j=0;p[i][j];j++);
        if(j>hl){
            hl=j;
            hi=i;
        }
    }
    for(i=hi;i<l;i++){
        p[i]=p[i+1];
    }
    fclose(fp);
    fp=fopen(argv[1],"w");
    for(i=0;i<l-1;i++){
        fputs(p[i],fp);
    }
}