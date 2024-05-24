#include<stdlib.h>
#include<stdio.h>
struct st
{
    int roll;
    char name[20];
};
void main()
{ 
    int n;
    printf("Numbe rof Students..\n");
    scanf("%d",&n);

    struct st **p;
    p=malloc(sizeof(struct st*)*n);
    int i;
    for(i=0;i<n;i++)
    p[i]=malloc(sizeof(struct st));

    for(i=0;i<n;i++)
    {
        scanf("%d %s",&p[i]->roll,p[i]->name);
    }

    for(i=0;i<n;i++)
    {
        printf("%d %s\n",p[i]->roll,p[i]->name);
    }

    for(i=0;i<n;i++)
    {
        free(p[i]);
    }
}