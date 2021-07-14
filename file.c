#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[8];
    FILE *p;
    int i;
    p=fopen("array.txt","w");
    printf("enter \n");
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<8;i++)
    {
        fprintf(p,"%d\n",a[i]);
    }
    fclose(p);


}
