#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ii=1,s=0,d=0,f=1,x,i,a[1005];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]==x)
        {
            if(d==0 && ii==1)
            {
                s=1;
                x=a[i];
            }
            else
            {
                f=0;

                break;
            }
        }
        else if(a[i]>x)
        {
            if(s==1 || d==1)
            {
                f=0;

                break;
            }
            else
            {
                x=a[i];
                ii=1;
            }
        }
        else if(a[i]<x)
        {
            if(ii==1)
            {
                x=a[i];
                d=1;
            }
            else
            {
                f=0;
               // printf("%d--m",i);
                break;
            }
        }
    }
    if(f==0) printf("NO\n");
    else printf("YES\n");
}
