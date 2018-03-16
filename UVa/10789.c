#include<stdio.h>
int prime(int n)
{
    int i,m;
    if(n==1) return 1;
    else
    {
        for(i=2,m=0;i*i<=n;i++)
        {
            if(n%i==0)
            {
                m=1;
                break;
            }
        }
        if(m==1) return 1;
        else return 0;
    }
}
int main()
{
    char a[10000],b[10000];
    int d[10000],i,j,k,l,m,t,c;
    scanf("%d",&t);
    getchar();
    for(k=1;k<=t;k++)
    {
        gets(a);
        l=strlen(a);
        for(i=0,m=0;i<l;i++)
        {
            for(j=i,c=0;j<l;j++)
            {
                if(a[i]==a[j]) c++;
            }
            if(c==1)
            {
                b[m]=a[i];
                m++;
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0,c=0;j<l;j++)
            {
                if(a[j]==b[i]) c++;
            }
            d[i]=c;
        }
        for(i=0,c=0;i<m;i++)
        {
            if(prime(d[i])==0)
                printf("%c",b[i]);
            if(prime(d[i]==1)) c++;
        }
        if(c==m) printf("empty");
        printf("\n");
    }
    return 0;
}
