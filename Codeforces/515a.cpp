#include<stdio.h>
using namespace std;
int main()
{
    int a,b,s,x;
    scanf("%d%d%d",&a,&b,&s);
    if(a<0) a*=-1;
    if(b<0) b*=-1;
    x=a+b;
    if(x%2==0)
    {
        if(s%2==0 &&s>=x) printf("Yes\n");
        else printf("No\n");
    }
    else
    {
        if(s%2!=0 &&s>=x) printf("Yes\n");
        else printf("No\n");
    }
}
