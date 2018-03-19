#include<cstdio>
#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
    int a[100000],b[100000],n,m,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    scanf("%d",&m);
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    sort(b,b+m);
    int total=0,c;
    for(j=m-1,c=0;j>=0;j--)
    {
        if(c<a[0])
        {
            c++;
            total+=b[j];
        }
        else
        {
            j--;
            c=0;
        }
    }
    printf("%d\n",total);
    return 0;
}
