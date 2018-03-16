#include<stdio.h>
#include<string.h>
int main()
{
    char a[105];
    int i,len,n,m,j,b;
    while(scanf("%d ",&n)==1&&gets(a))
    {
        if(n==0) break;
        len=strlen(a);
        m=len/n;
        for(i=1;i<=n;i++)
        {
            b=m*i;
            for(j=b-1;j>=b-m;j--)
            {
                printf("%c",a[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
