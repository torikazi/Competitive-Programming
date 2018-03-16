#include<bits/stdc++.h>
using namespace std;

int main()
{   double a,b,c,s,r,f=0;
    while(cin>>a>>b>>c)
    {
        if(a<=0 ||b<=0 ||c<=0) printf("The radius of the round table is: 0.000\n");
        else
        {
        s=(a+b+c)/2.0;
        r=(s-a)*(s-b)*(s-c)/s;
        r=sqrt(r);
        printf("The radius of the round table is: %.3lf\n",r);
        }

    }
}
