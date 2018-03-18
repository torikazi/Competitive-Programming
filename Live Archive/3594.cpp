#include<stdio.h>
int main()
{
    int i,ans;
    char a[1000];
    while(gets(a))
    {
        if(a[0]=='#') break;
        for(i=0,ans=0;a[i]!='\0';i++)
        {
            if(a[i]!=' ')
                ans+=(i+1)*(a[i]-'A'+1);
        }
        printf("%d\n",ans);
    }
}
