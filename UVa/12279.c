#include<stdio.h>
int main()
{
    int n,a,i,j=1,s;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        for(i=0,s=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a!=0) s++;
            else if(a==0) s--;
        }
        printf("Case %d: %d\n",j,s);
        j++;
    }
    return 0;
}
