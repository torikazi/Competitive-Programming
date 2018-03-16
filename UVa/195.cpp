#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j;
    string a,b,c,d;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        cin>>a;
        b="";
        c="";
        for(i=0;i<a.size();i++)
        {
            if(a[i]>='A' && a[i]<='Z') b+=a[i];
            else c+=a[i];
        }
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        i=0;j=0,d="";
        while(i<b.size() && j<c.size())
        {
            if(tolower(b[i])<=c[j]){
                d+=b[i];
                i++;
            }
            else{
                d+=c[j];
                j++;
            }
        }

        if(j==c.size()) for(;i<b.size();i++) d+=b[i];
        if(i==b.size()) for(;j<c.size();j++) d+=c[j];
        cout<<d<<endl;
        while(next_permutation(d.begin(),d.end())){
              cout<<d<<endl;
        }

    }
}
