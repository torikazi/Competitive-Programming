#include<stdio.h>
int main()
{
    int a[20000],b[20000],t,n,u,l,r,val,q,i,x,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&u);
        for(i=0;i<n;i++)
            a[i]=0;
        for(i=0;i<u;i++){
            scanf("%d%d%d",&l,&r,&val);
            a[l]+=val;
            a[r+1]-=val;
        }
        for(i=0,c=0;i<n;i++)
        {
            c+=a[i];
            b[i]=c;
        }
        scanf("%d",&q);
        for(i=0;i<q;i++){
            scanf("%d",&x);
            printf("%d\n",b[x]);
        }
    }
    return 0;
}
