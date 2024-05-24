#include<stdio.h>
void main(){
    short arr[3][2]={56,86,99,123,157,20};
    printf("%d \n",*(*(arr+2)+1));
}