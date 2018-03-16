#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[200],b[200],c,i,x,j;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+m);
    for(i=0,c=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i] && b[j] && abs(a[i]-b[j])<=1)
            {
                c++;
                a[i]=0;
                b[j]=0;
            }
        }
    }
    printf("%d\n",c);
}
