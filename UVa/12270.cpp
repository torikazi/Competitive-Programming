#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y,i,j;
    while(scanf("%d",&n)==1 && n)
    {
        for(i=0,x=0,y=0;i<n;i++)
        {
            cin>>j;
            if(j) x++;
            if(!j) y++;
        }
        cout<<x-y<<endl;
    }
}
