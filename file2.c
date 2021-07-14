#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *f1;
    char ch;
    f1=fopen("abc.txt","w");
    printf("\n enter  the text \n");
    while(1)
    {
        scanf("%c",&ch);
        if(ch=='*')
            break;
        fputc(ch,f1);//function to write character to the file

    }
    fclose(f1);
    return;
}
