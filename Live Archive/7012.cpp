#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,mx,mn;

    while(scanf("%d%d%d%d",&a,&b,&c,&d)==4)
    {

        if(a==0 &&b==0 && c==0 &&d==0) break;
    mn=abs(b-c);
    mx=abs(a-d);
    printf("%d %d\n",mn,mx);
    }
}
