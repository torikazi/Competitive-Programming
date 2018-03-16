#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
    char a[10000],b[10000],x[10000];
    int i,j,k,n,m,c,d[10000],e[100000];
    while(gets(a))
    {
        n=strlen(a);
        sort(a,a+n);
        for(i=0,k=0;i<n;i++)
        {
            for(j=i,c=0;j<n;j++)
            {
                if(a[i]==a[j]) c++;
            }
            if(c==1)
            {
                b[k]=a[i];
                k++;
            }
        }
        for(i=0,j=k-1;i<k;i++,j--)
            x[j]=b[i];
        //puts(b);
        //puts(x);
        for(i=0;i<k;i++)
            d[i]=0;
        for(i=0;i<k;i++)
        {
            for(j=0,c=0;j<n;j++)
            {
                if(x[i]==a[j]) d[i]++;
            }
            e[i]=d[i];
        }
        sort(e,e+k);
        for(i=0;i<k;i++)
        {
            for(j=0,m=0;j<k;j++)
            {
                if(e[i]==d[j])
                {
                    if(x[j]>m)
                    {
                        m=x[j];
                        x[j]=0;
                    }
                }
            }
            printf("%d %d\n",m,e[i]);
        }
        printf("\n");
    }
    return 0;
}
