#include<stdio.h>
#include<string.h>
int main()
{
    int i,s;
    char a[10000];
    while(gets(a))
    {
        if(a[0]=='0'&&strlen(a)==1) break;
        s=0;
        for(i=0;a[i]!='\0';i++)
        {
            s=(s*10+a[i]-'0')%17;
        }

            if(s==0) printf("1\n");
            else printf("0\n");
    }
    return 0;
}
