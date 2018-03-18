#include<stdio.h>
int main()
{
    int a,b,T,ans,i,N,n,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&n);

        for(j=1,ans=0;j<=n;j++)
        {
            T=((j+2)*(j+1))/2;
            ans+=j*T;
        }
        printf("%d %d %d\n",i,n,ans);
    }
}
