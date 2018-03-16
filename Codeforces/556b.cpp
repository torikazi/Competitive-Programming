#include<bits/stdc++.h>
int main()
{
    int n,a[2000],f=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<=1000000;j++)
    {
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(a[i]==n-1) a[i]=0;
                else a[i]++;
            }
            else
            {
                if(a[i]==0) a[i]=n-1;
                else a[i]--;
            }

        }
        for(i=0,f=0;i<n;i++)
        {
            if(a[i]!=i) break;
        }
        if(i==n)
        {
            f=1;
            printf("Yes\n");
            break;
        }
    }
    if(!f) printf("No\n");
}
