#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int a[200];
    int i,j,cc,cnt;

    bool f=0;
    memset(a,0,sizeof(a));
    cin>>s;
    if(s.size()<26)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    for(i=0;i<s.size()-25;i++)
    {
        memset(a,0,sizeof(a));
        for(j=i,cnt=0;j<i+26;j++)
        {
            if(s[j]>='A' && s[j]<='Z')
            {
                a[s[j]]=1;
            }
            else if(s[j]=='?')cnt++; //??
        }
        queue<int>st;
        for(j='A',cc=0;j<='Z';j++)
        {
            if(a[j]==0)
            {
                cc++;
                st.push(j);
            }
        }
        //cout<<cc<<endl;
        if(cc==cnt)
        {
            f=1;
            //cout<<"YES";
            for(j=0;j<i;j++)
            {
                if(s[j]!='?') cout<<s[j];
                else cout<<"A";
            }
            //cout<<i<<endl;
            for(j=i;j<i+26;j++)
            {
                if(s[j]=='?')
                {
                    printf("%c",st.front());
                    st.pop();
                }
                else cout<<s[j];
            }
            for(int k=j;k<s.size();k++)
            {
                if(s[k]=='?') cout<<"A";
                else cout<<s[k];
            }
            break;
        }

    }
    if(!f) printf("-1\n");
}
