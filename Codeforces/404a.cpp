#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,f;
    char a[305][305],c;
    while(scanf("%d",&n)==1)
    {
        getchar();
    for(i=0;i<n;i++)
    {
        //getchar();
        for(j=0;j<n;j++)
        {
            scanf("%c",&a[i][j]);
        }
        getchar();
    }
    c=a[0][0];
    int d=a[0][1];
    int m;
    for(i=0,f=1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            m=a[i][j];
            if(i==j||i+j==n-1)
            {
                if(m!=c)
                {
                    f=0;
                    break;
                }
            }
            else
            {
                if(m!=d)
                {
                    f=0;
                    break;
                }
            }
        }
    }
    if(c==d) f=0;
    if(f==0) printf("NO\n");
    else printf("YES\n");
    }
}
