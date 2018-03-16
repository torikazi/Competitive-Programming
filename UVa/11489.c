#include<stdio.h>
int main()
{
    char a[10000];
    int i,s;
    while(scanf("%s",&a)==1)
    {
        s=1;
        l=strlen(a);
        for(i=0;a[i]!='\0';i++)
        {
            s+=a[i]-'0';
        }
        for(i=l;i>=0;i--)
        {
            d=s-a[i]-'0';
            if(
        }
        if(s%3==0) printf("S\n");
        else printf("T\n");
    }
    return 0;

}
