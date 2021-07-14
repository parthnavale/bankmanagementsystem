#include<stdio.h>
#include<stdlib.h>
#include"addaccount.h"
#include"search.h"
#include"delaccount.h"
#include"account.h"
void main()
{
        int opt,no;
        NODE1 *a;
        char pa[100];
        ACCT b;
        init1(&b);// function to initilize the account
        printf("\n welcome to Bhutan mini bank system \n ");
        while(1)
        {
            printf("\n1. add account \n2. Delete account\n3. Change Pin\n4. Withdraw\n5. Deposits \n")
            scanf("%d",&opt);
            if(opt>5&&opt<8)
                break;
            switch(opt)
            {
            case 1:
                addaccount();
                break;
            case 2:
                printf("\n enter the account number ");
                scanf("%d",&no);
                a=searchno(no,&b);
                if(a==NULL)
                    {
                        printf("\n account do not exist\n");
                        break;
                    }
                    deleteacct(a,&b);
                    break;
            case 3:
            case 4:
                printf("\n enter the account number \n");
                scanf("%d",&no);
                a=searchno(no,&b);
                if(a==NULL)
                {
                    printf("\n account not found \");
                    break ;
                }
                printf("enter the password\n");
                scanf("%s",&pa);
                if(strcmp(pa,a->password)==0)
                {
                        printf("your account %d",a->acno);
                        printf("\n your name %s",a->name);
                        withdrawl(a);
                        break ;
                }
                else
                {
                    printf("%d",)
                    printf("\n not correct password \n");
                    break;
                }

                if()






            }






        }
}


