#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"adhar.h"
#include"account.h"
#include"encoding.h"
#include"hider.h"
#include"acnogenerator.h"
#include"savetofile.h"
void addaccount()
{
    int opnbal,i=0;
    LIST *t;
    ACCT *q;
    NODE *a;// adhar node11
    NODE1 *z,*b;// account node
    int adharno1;
    char nm[20];
    FILE *f1;
        f1=fopen("account.dat","wb");
    char pass[100];
    printf("\n enter the adhar number\n");
    scanf("%d",&adharno1);
    fromFile(t);
    a=t->st;
    while(a!=NULL)
    {
        if(adharno1==a->data.ano)
        {
            strcpy(nm,a->data.anm);
            break;
        }
    }
    if(a==NULL)
        {
            printf("\n not found ");
            return ;
        }
    else
        printf("%s",nm);
while(1)
{
    printf("\n enter the opening balance \n");
    scanf("%d",&opnbal);
    if(opnbal>=500)
     {
         break ;
     }
     else
     {
         printf("\n enter the amount greater than 500");
     }

    }
    z=q->st1;
    b=(NODE1*)malloc(sizeof(NODE1));
        if(q->st1==NULL)
        {
            z=b;
        }
            else
                {
                    while(z->next!=NULL)
                        {
                            z=z->next;
                        }
                z->next=b;
                }
        b->next=NULL;
        b->adharno=adharno1;
        b->onpbal=opnbal;
        strcpy(b->name,nm);
        pass=hider();
        strcpy(b->password,pass);
        b->acno=acnogenerate();







savetofile(*q);
}



