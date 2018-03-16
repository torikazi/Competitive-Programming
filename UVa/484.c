#include<stdio.h>
int a[100000000];
int b[100000000];
int main()
{
    int i,j,k,c,m,l,x,d;
    while(1)
    {
        d=getchar();
        for(i=0;i<=d;i++)
        {
            scanf("%d",&a[i]);
        }
        x=i;
        for(i=0,k=0;i<x;i++)
        {
            for(j=i,c=0;j<x;j++)
            {
                if(a[i]==a[j]) c++;
            }
            if(c==1)
            {
                b[k]=a[i];
                k++;
            }
        }
        for(i=0;i<k;i++)
        {
            for(j=0,c=0;j<x;j++)
            {
                if(b[i]==a[j]) c++;
            }
            printf("%d %d\n",b[i],c);
        }
    }
    return 0;
}
