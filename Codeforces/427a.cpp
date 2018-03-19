#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a[100009],mx,s,k,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0,s=0;i<n;i++)
    {
        if(s==0 && a[i]==-1) cnt++;
        else if(a[i]>0)
        {
            s+=a[i];
        }
        else
        {
            s--;
        }
    }
    printf("%d\n",cnt);
}
