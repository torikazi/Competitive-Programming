#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l1,l2,x;
    char a[1000],b[1000];
    while(gets(a)&&gets(b))
    {
        l1=strlen(a);
        l2=strlen(b);
        if(l1<l2) x=l1;
        else x=l2;
        for(i=0;i<x;i++)
        {
            printf("%c%c\n",b[i],a[i]);
        }
        if(x==l2)
        {
            for(i=x;a[i]!='\0';i++)
                printf("%c\n",a[i]);
        }
        else if(x==l1)
        {
            for(i=x;b[i]!='\0';i++)
                printf("%c\n",b[i]);
        }
    }
    return 0;
}
