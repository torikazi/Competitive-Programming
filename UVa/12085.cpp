#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[100005],x,cnt,cs=1;

    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        for(int i=0;i<n;i++) cin>>a[i];
        a[n]=2000000099;
        cout<<"Case "<<cs++<<":"<<endl;
        int i=0;
        while(i<n){
            x=a[i];
            cnt=0;
            while(a[i+1]-a[i]==1){
                i++;
                cnt++;
            }
            if(cnt){
                stringstream d,dd;
                string s,ss;
                d<<x;
                dd<<a[i];
                s=d.str();
                ss=dd.str();

                cout<<"0"<<s<<"-";
                int j;
                for(j=0;j<s.size();j++){
                    if(s[j]!=ss[j]) break;
                }
                for(;j<ss.size();j++) cout<<ss[j];
                cout<<endl;
            }
            else cout<<"0"<<x<<endl;
            i++;
        }
        cout<<endl;
    }
}

