#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,a[105][105],i,j,x,y,z,b[105],c;
    memset(a,0,sizeof(a));
    scanf("%d%d",&n,&m);
    while(m--)
    {
        scanf("%d%d",&x,&y);
        while(y--)
        {
            scanf("%d",&z);
            a[x][z]++;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1,c=0;j<=n;j++) if(a[i][j]!=0) c++;
        b[i]=c;
    }
    int p=1;
    while(p<=n)
    {
        for(j=1;j<=n;j++)
        {
            if(b[j]==0)
            {
                printf("%d ",j);
                b[j]=200;
                for(int k=1;k<=n;k++)
                {
                    if(a[k][j]>0) b[k]--;
                }
                break;
            }
        }
        p++;
    }
}
