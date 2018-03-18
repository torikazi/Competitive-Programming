#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,c,max,m;
    char a[2000][20],b[2000][20];
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        for(i=0;i<n;i++)
        {
            scanf("%s",a[i]);
        }
        for(i=0,k=0;i<n;i++)
        {
            for(j=i,c=0;j<n;j++)
            {
                if(strcmp(a[i],a[j])==0) c++;
            }
            if(c==1)
            {
                strcpy(b[k],a[i]);
                k++;
            }
        }
        max=0;
        for(i=0;i<k;i++)
        {
            for(j=0,c=0;j<n;j++)
            {
                if(strcmp(b[i],a[j])==0) c++;
            }
            if(c>max)
            {
                max=c;
                m=i;
            }
        }
        printf("%s\n",b[m]);
    }
    return 0;
}
