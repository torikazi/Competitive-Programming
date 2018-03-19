#include<bits/stdc++.h>
int main()
{
    int r,c,i,j,f,cnt=0;
    char a[20][20];
    scanf("%d%d",&r,&c);
    getchar();
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%c",&a[i][j]);
        }
        getchar();
    }
    for(i=0,cnt=0;i<r;i++)
    {
        for(j=0,f=1;j<c;j++)
        {
            if(a[i][j]=='S')
            {
                f=0;
                break;

            }
        }
        if(f)
        {
            cnt+=c;
            for(j=0;j<c;j++)
                a[i][j]='*';
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0,f=1;j<r;j++)
        {
            if(a[j][i]=='S')
            {
                f=0;
                break;
            }
        }
        if(f)
        {
            for(j=0;j<r;j++)
            {
                if(a[j][i]=='.') cnt++;
            }
        }
    }
    printf("%d\n",cnt);
}
