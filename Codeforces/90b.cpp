#include<bits/stdc++.h>
int main()
{
    int n,m;
    char a[200][200];
    scanf("%d%d",&n,&m);
    getchar();
    int i,j,k,f;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%c",&a[i][j]);
        }
        getchar();
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            f=1;
            for(k=0;k<m;k++)
            {
                if(a[i][j]==a[i][k] && k!=j)
                {
                    f=0;
                    break;
                }
            }
            for(k=0;k<n;k++)
            {
                if(a[i][j]==a[k][j] && k!=i)
                {
                    f=0;
                    break;
                }
            }
            if(f) printf("%c",a[i][j]);
        }
    }
}
