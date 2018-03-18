#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t,s,cs=1,n,i,a[1000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0,s=0;i<n;i++){
            scanf("%d",&a[i]);
            s+=a[i];
        }
        printf("Case %d: %d\n",cs++,s);


    }
}
