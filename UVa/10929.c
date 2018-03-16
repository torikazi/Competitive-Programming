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
            s=(s*10+a[i]-'0')%11;
        }

            if(s==0) printf("%s is a multiple of 11.\n",a);
            else printf("%s is not a multiple of 11.\n",a);
    }
    return 0;
}
