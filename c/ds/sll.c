#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student {
    int rollno;
    char name[20];
    float marks;
    struct student *m4;
};

void add_end(void);
void print_node(void);
int count_node(void);
void read_file(void);
void search_node(void);
void delete_node(void);
void print_rec(void);
void rev_rec(struct student *);
void rev_rec1(void);
void add_middle(void);
void count1_node(void);
void sort_name(void);



static int c;
struct student *akm;

void main()
{
    int op,c,k;
    
    while(1)
    {
        printf("\033[1;31mEnter Your choice..\n\033[0m");
        printf("\033[1;33m1.add_end 2.print_node 3.count node 4.search_node\n");
        printf("5.delete_node 6.Read_file 7.print_rec 8.rev_rec \n2");
        printf("10.add_midlle 11.count1_node 12.sort_name 16.Exit \n\033[0m");
        scanf("%d",&op);
        
        switch(op)
        {
            case 1: add_end();                   break;
            case 2: print_node();                break;
            case 3: k=count_node(); 
                    printf("count=%d\n",k);      break;
            case 4: search_node();               break;
            case 5: delete_node();               break;
            case 6: read_file();                 break;
            case 7: print_rec();                 break;
            case 8: rev_rec(akm);                break;
            case 9: rev_rec1();                  break;
            case 10: add_middle();               break;
            case 11 : count1_node();               break;
            case 12: sort_name();               break;
            case 16: exit(0);                  break;
            default : printf("Wrong choice ..\n");  
        }
    }
}

void sort_name()
{   
    struct student t, *p1=akm,*p2;
    int c=count_node(),i,j,k;
    
    for(i=0 ; i<c ;i++ )
    {
        p2=p1->m4;
        for(j=0 ; j< c-1-i ; j++)
        {
            if(strcmp(p1->name,p2->name)<0)
            {
                t.rollno=p1->rollno;
                strcpy(t.name,p1->name);
                t.marks=p1->marks;

                p1->rollno=p2->rollno;
                strcpy(p1->name,p2->name);
                p1->marks=p2->marks;

                p2->rollno=t.marks;
                strcpy(p2->name,t.name);
                p2->marks=t.marks;
            }
            p2=p2->m4;
        }
        p1=p1->m4;
    }
    rev_rec1();
}


void add_end(void)
{
    struct student *ump=malloc(sizeof(struct student));

    printf("Enter the rollno name and marks..\n");
    scanf("%d %s %f",&ump->rollno,ump->name,&ump->marks);

    ump->m4=0;
    if(akm==0)
    {
        akm=ump;
    }
    else
    {
        struct student *m24=akm;
        while(m24->m4)
        m24=m24->m4;
        
        m24->m4=ump;
    }       
}

void  print_node (void)
{
    struct student *awm=akm;
    if(awm==0)
    {
        printf("NO RECORDS FOUND..\n");
        return;
    }
    while(awm)
    {
        printf("%d %s %f\n",awm->rollno,awm->name,awm->marks);
        awm=awm->m4;
    }
}

int count_node (void)
{
    int c=0;
    struct student *awm=akm;
    if(awm==0)
    {
        printf("NO RECORDS FOUND..\n");
        return 0;
    }
    while(awm)
    {
       c++;
        awm=awm->m4;
    }
    return c;
}

void read_file(void)
{
    
    FILE *fp=fopen("data","r");


   while(1)
   {    
        struct student *ump=malloc(sizeof(struct student));
        if(fscanf(fp,"%d %s %f",&ump->rollno,ump->name,&ump->marks)==-1)
            break;

        ump->m4=0;
        if(akm==0)
        {
            akm=ump;
        }
        else
        {
            struct student *m24=akm;
            while(m24->m4)
            m24=m24->m4;
            
            m24->m4=ump;
        }
   }  
   fclose(fp);     
}


void search_node(void)
{
    struct student *awm=akm;
    int num,f=0;
    printf("Enter Roll-Number to search..\n");
    scanf("%d",&num);
    while(awm)
    {   
        if(awm->rollno == num)
        {
            printf("%d %s %f\n",awm->rollno,awm->name,awm->marks);
            f=1;
        }

        awm=awm->m4;
    }
     if(f==0)
        printf("NO Search Found..\n");
}

void delete_node(void)
{
    if(akm==0)
    {
        printf("No records Found..\n");
        return;
    }
    int num;
    printf("enter the rollno....");
    scanf("%d",&num);
    struct student *tom=akm,*g36;
    while(tom)
    {
        if(tom->rollno==num)
        {
            if(akm==tom)
            akm=tom->m4;

            else
            g36->m4=tom->m4;

            free(tom);
            return;
        }
        g36=tom;
        tom=tom->m4;
    }
}


void print_rec(void)
{   
    if(akm)
    {
        printf("%d %s %f\n",akm->rollno,akm->name,akm->marks);
        if(akm->m4!=0)
        {
            akm=akm->m4;
            print_rec();
        }
    }
    else 
    printf("No records Found..\n");
}

void rev_rec(struct student *ptr)
{   
    if(ptr)
    {
        if(ptr->m4)
        rev_rec(ptr->m4);
        printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);  
    } 
}

void rev_rec1(void)
{   
    static struct student *ptr;
    ptr=akm;
    if(ptr)
    {
        if(ptr->m4)
        rev_rec(ptr->m4);
        printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);  
    } 
}

void add_middle(void)
{
    struct student *ump=malloc(sizeof(struct student));

    printf("Enter the data..\n");
    scanf("%d %s %f",&ump->rollno,ump->name,&ump->marks);

    if((akm==0) || (ump->rollno) < (akm->rollno) )
    {
        ump->m4=akm->m4;
        akm=ump;
    }
    else
    {
        struct student *tom=akm;
        while((tom->m4) && (ump->rollno) > (tom->m4->rollno) )
        tom=tom->m4;

        ump->m4=tom->m4;
        tom->m4=ump;
    }
}

void count1_node(void)
{
    struct student *awm=akm;
    if(awm==0)
    {
        printf("NO RECORDS FOUND..\n");
        return ;
    }
    while(awm)
    {
       c++;
        awm=awm->m4;
    }
    printf("count = %d\n",c);
}

