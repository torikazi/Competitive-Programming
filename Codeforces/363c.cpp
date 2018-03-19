#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int cnt,i,j,f;
    cin>>a;
    vector<int>v;
    for(i=1,cnt=1;a[i]!='\0';i++)
    {
        if(a[i]==a[i-1]) cnt++;
        else
        {
            v.push_back(cnt);
            cnt=1;
        }
    }
    v.push_back(cnt);
    for(i=0,j=0,f=0;i<v.size();i++)
    {
        //cout<<v[i]<<endl;
        if(v[i]==1)
        {
            cout<<a[j];
            j++;
            f=0;
        }
        else if(v[i]>1 && f==0)
        {
            cout<<a[j]<<a[j];
            j+=v[i];
            f=1;
        }
        else
        {
            cout<<a[j];
            j+=v[i];
            f=0;
        }

    }
}
