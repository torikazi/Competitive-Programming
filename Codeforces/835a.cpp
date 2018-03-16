#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d,x,y;
    cin>>n>>a>>b>>c>>d;
    x=n*a+c+c;
    y=n*b+d+d;
    if(x<y) printf("First\n");
    else if(y<x) printf("Second\n");
    else printf("Friendship");
}
