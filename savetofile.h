#include<stdio.h>
#include<stdlib.h>
#include"account.h"
void savetofile(ACCT *t)
{
	FILE *f1;
	ACCT tmp;
	NODE1 *a=t->st1;
	if(a==NULL)
		return;
	f1=fopen("account.dat","wb");
	while(a!=NULL)
	{
		tmp=a->data;
		fwrite(&tmp,sizeof(NODE1),1,f1);
		a=a->next;
	}
	fclose(f1);
	return;
}

