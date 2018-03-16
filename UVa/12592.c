#include<stdio.h>
#include<string.h>
int main()
{
    char a[30][200],b[30][200],c[200];
    int n,m,i,j;
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        gets(a[i]);
        gets(b[i]);
    }
    scanf("%d",&m);
    getchar();
    for(i=1;i<=m;i++)
    {
        gets(c);
        for(j=1;j<=n;j++)
        {
            if(strcmp(c,a[j])==0) puts(b[j]);
        }
    }
    return 0;
}
