#include<bits/stdc++.h>
int main()
{
    int n,m,a,b,i,s;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    float k;
    i=0;
    s=0;
    k=(float)b/m;
    int p;
    int cnt=0;
    if(m>n){
        int p=a*n;
        if(p>b){
            s+=b;
        }
        else{
            s+=p;
        }
    }

    else if(k<a)
    {
        while(i+m<=n)
        {
            s+=b;
            i+=m;
        }
        if(i<n&&b<=a) s+=b;
        else
        {
            while(i<n)
            {
                s+=a;
                i++;
            }
        }
    }
    else s=n*a;
    printf("%d\n",s);
}
