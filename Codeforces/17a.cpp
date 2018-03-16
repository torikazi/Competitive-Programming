#include<stdio.h>
#include<math.h>
int prime(n)
{
    int flag=0,i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0) return 0;
    else return 1;
}
int main()
{
    int a[1010],n,m=0,k,i,j,f,x,c=0;
    for(i=2,k=0;i<=1010;i++)
    {
        f=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
        {
            a[m]=i;
            m++;
        }
    }
    while(scanf("%d%d",&n,&k)==2)
    {
        c=0;
        for(i=0;a[i]<=n;i++)
        {
            x=a[i]+a[i+1]+1;
            if(x>n) break;
            if(x<=n && prime(x)==0) c++;
        }
        if(k<=c) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
