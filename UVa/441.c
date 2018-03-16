#include<stdio.h>
int main()
{
    int n,a[20],i,j,k,l,m,o,c=0;
    while(scanf("%d",&n)==1)
    {

        if(n==0) break;
        if(c!=0) printf("\n");
        c++;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                {
                    for(l=k+1;l<n;l++)
                    {
                        for(m=l+1;m<n;m++)
                        {
                            for(o=m+1;o<n;o++)
                            {
                                printf("%d %d %d %d %d %d\n",a[i],a[j],a[k],a[l],a[m],a[o]);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
