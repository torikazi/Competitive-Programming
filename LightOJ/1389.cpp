#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t,cs=1,i,c,n;
    string a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a;
        for(i=0,c=0;i<n;)
        {
            if(a[i]=='.')
            {
                c++;
                i+=3;
            }
            else i++;
        }
        printf("Case %d: %d\n",cs++,c);

    }
}
