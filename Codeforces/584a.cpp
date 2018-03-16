#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i;
    cin>>n>>t;
    if(t==10)
    {
        if(n==1) printf("-1");
        else{
        printf("1");
        for(i=1;i<n;i++)
            printf("0");
        }
    }
    else{
    for(i=1;i<=n;i++)
        printf("%d",t);
    }

}
