#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,p,i,j,xx,x,line,col,h,l,y;

    while(scanf("%lld%lld",&n,&p)==2 && n &&p)
    {
        x=sqrt(p);
        if(x%2==0) x++;
        else if(x*x<p)
            x+=2;
      //  cout<<x<<endl;
        xx=x*x;
        h=xx;
        l=h-x+1;
        y=(n-x)/2;
        if(p<=h && p>=l)
        {
            col=n-y;
            line=p-l+1+y;
            printf("Line = %lld, column = %lld.\n",line,col);
            continue;
        }
        h=l;
        l=h-x+1;
        if(p<=h && p>=l)
        {
            line=1+y;
            col=p-l+1+y;
            printf("Line = %lld, column = %lld.\n",line,col);
            continue;
        }
        h=l;
        l=h-x+1;
        if(p<=h && p>=l)
        {
            col=1+y;
            line=x-(p-l)+y;
            printf("Line = %lld, column = %lld.\n",line,col);
            continue;
        }
        h=l;
        l=h-x+2;
        //cout<<h<<" "<<l<<endl;
        if(p<=h && p>=l)
        {
            line=n-y;
            col=x-(p-l+1)+y;
            printf("Line = %lld, column = %lld.\n",line,col);
            continue;
        }

    }
}
