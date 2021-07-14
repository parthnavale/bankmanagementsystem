void fromFile(ACCT *t)
{
	NODE1 *a=t->st1,*b;
	 tmp;
	FILE *f1=fopen("adhar.dat","rb");
	if(f1==NULL)
		return;
	if(t->st!=NULL)
		delAll(t);
	while(1)
	{
		fread(&tmp,sizeof(ADHAR),1,f1);
		if(feof(f1))
			break;
		a=(NODE *)malloc(sizeof(NODE));
		a->data=tmp;
		a->next=NULL;
		if(t->st==NULL)
			t->st=a;
		else
			b->next=a;
		b=a;
	}
	fclose(f1);
}
