#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,r=1,i,ans;
    cin>>n>>a>>b;
    vector<int>v,vv;
    for(i=1;i<=n;i++)
        v.push_back(i);
    r=1;
    while(1){
       // cout<<"m";
        for(i=0;i<v.size();i+=2)
        {
            if((v[i]==a || v[i]==b) && (v[i+1]==a || v[i+1]==b) )
            {
                if(r==log2(n)) cout<<"Final!"<<endl;
                else cout<<r<<endl;
                return 0;
            }
            else if((v[i]==a || v[i]==b) ){
                v[i+1]=0;
            }
            else {
                v[i]=0;
            }
        }
        vv.clear();
        for(i=0;i<v.size();i++)
           if(v[i]!=0) vv.push_back(v[i]);
        v.clear();
        for(i=0;i<vv.size();i++)
            v.push_back(vv[i]);
//        for(i=0;i<v.size();i++)
//            cout<<v[i]<<" ";
   //     cout<<endl;
        r++;
    }
    //cout<<ans<<endl;
}
