#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    scanf("%d",&n);
    if(n%2==0)
    {
        a=2*3;
        b=n-a;
    }
    else
    {
        a=9;
        b=n-9;
    }
    printf("%d %d\n",a,b);
}
