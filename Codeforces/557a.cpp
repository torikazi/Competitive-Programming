#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m1,n1,m2,n2,m3,n3,one,two,three,x,i,total;
    scanf("%d",&n);
    scanf("%d%d",&m1,&n1);
    scanf("%d%d",&m2,&n2);
    scanf("%d%d",&m3,&n3);

    one=m1;
    two=m2;
    three=m3;
    total=m1+m2+m3;

    x=n1-m1;
    while(x--)
    {
        if(total==n) break;
        one++;
        total++;
    }

    x=n2-m2;
    while(x--)
    {
        if(total==n) break;
        two++;
        total++;
    }

    x=n3-m3;
    while(x--)
    {
        if(total==n) break;
        three++;
        total++;
    }
    printf("%d %d %d\n",one,two,three);
}
