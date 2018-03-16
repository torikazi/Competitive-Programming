#include<stdio.h>
int GCD(int i,int j)
{
    int x;
    if(j%i==0) return i;
    else x=GCD(j%i,i);
    return x;
}
int main()
{
    int i,j,G,n;
    while(scanf("%d",&n)==1)
    {
        G=0;
        if(n==0) break;
        else
        {
            for(i=1;i<n;i++)
            {
                for(j=i+1;j<=n;j++)
                {
                    G+=GCD(i,j);
                }
            }
            printf("%d\n",G);
        }
    }
    return 0;
}
