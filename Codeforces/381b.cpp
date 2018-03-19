#include<cstdio>
#include<iostream>
#include<algorithm>
#include<stdlib.h>

using namespace std;
int a[100050],b[100050],c[100050];

int main()
{
    int n,i,j,x,y,z,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(i=0,j=0,k=0;i<n;i++)
    {
        x=upper_bound(a,a+n,a[i])-a;
        y=lower_bound(a,a+n,a[i])-a;
        z=x-y;
        if(z>1)
        {
            c[j]=a[i];
            j++;
            i+=z;
            i--;
        }
        b[k]=a[i];
        k++;
    }
    if(c[j-1]==b[k-1]) j--;
    int p=k+j;
    printf("%d\n",p);
    for(i=0;i<j;i++) printf("%d ",c[i]);
    for(i=k-1;i>=0;i--) printf("%d ",b[i]);
    return 0;
}
